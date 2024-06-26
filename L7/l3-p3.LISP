;Define a function to tests the membership of a node in a n-tree represented as (root list_of_nodes_subtree1 ... list_of_nodes_subtreen)
Eg. tree is (a (b (c)) (d) (E (f))) and the node is "b" => true

(defun searching (l n)
(cond
	((and (atom l) (equal l n)) 1)
    ((atom l) 0)
	((listp l) (apply #'+ (mapcar #'(lambda(s) (searching s n)) l)))
	)
	)

(defun wrapper(n)
(cond
    ((> n 0) t)
    (T nil)
    )
	)
(print (wrapper(searching  '(1 (2 (3)) (4) (5 (6))) 10)) )



(defun searching (l)
(cond
    ((numberp l) l)
	((atom l) 0)
	((listp l) (apply #'+ (mapcar #'(lambda(s) (searching s)) l)))
	)
	)

(print (searching  '(1 (2 (3)) (4) (() (A))))) 