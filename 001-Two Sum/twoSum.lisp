#!/usr/bin/clisp

(defun twoSum (xarry cnt sum) 
  (setq hash (make-hash-table))
  (dotimes (i cnt)
    (setf searchhash (gethash (- sum (aref xarry i)) hash)) 
    (setq ret (make-array '(2)))
    (if searchhash
      (setf (aref ret 0) searchhash)
    )
    (if searchhash
      (setf (aref ret 1) i)
    )
    (if searchhash
      (return-from twoSum ret)
    )

    (setf (gethash (aref xarry i) hash) i)
  )
)

;(setq x (make-array 4) :initial-contents '(1 3 5 7))
(setq x (make-array '(4) :initial-contents '(0 1 5 7)))
;(write x)

(write (twoSum x 4 6))
