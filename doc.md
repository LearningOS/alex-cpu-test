# Report

1. test_cmp_assign

        test_cmp_assign:
        	.frame	$fp,16,$sp
        # BB#0:
          # 建立函数堆栈
        	addi	$sp, $sp, -4    # push fp
        	sw	0($sp), $fp
        	addi	$fp, $sp, 0     # fp = sp
        	addi	$sp, $sp, -16   # sp += 16, 此时fp-xx是局部变量, fp+0是返回地址, fp+xx是参数
          # 参数存入寄存器t0, t1
        	lw	$t0, 16($fp)    # t0 = b
        	lw	$t1, 8($fp)     # t1 = a
        	sw	-8($fp), $t1    # 存入局部变量, int型局部变量4字节对齐
        	sw	-12($fp), $t0
        	lw	$t1, -8($fp)
        	bgt	$t1, $t0, $BB0_2  # if a > b goto BB0_2
        	j	$BB0_1
        $BB0_1:
        	lw	$t0, -12($fp)
        	lw	$t1, -8($fp)
        	gt	$t0, $t1, $t0     # t0 = a > b
        	li	$t1, 1            # t1 = 1
        	and	$t0, $t0, $t1     # t0 = t0 & 1
        	sw	-4($fp), $t0      # local[0] = t0 (local[0]返回值)
        	j	$BB0_5
        $BB0_2:
        	lw	$t0, -12($fp)
        	lw	$t1, -8($fp)
        	le	$t0, $t1, $t0
        	bnez	$t0, $BB0_4
        	j	$BB0_3
        $BB0_3:
        	lw	$t0, -12($fp)
        	lw	$t1, -8($fp)
        	lt	$t0, $t1, $t0
        	li	$t1, 1
        	and	$t0, $t0, $t1
        	sw	-4($fp), $t0
        	j	$BB0_5
        $BB0_4:
        	lw	$t0, -12($fp)
        	lw	$t1, -8($fp)
        	eq	$t0, $t1, $t0
        	li	$t1, 1
        	and	$t0, $t0, $t1
        	sw	-4($fp), $t0
        $BB0_5:
        	lw	$t0, -4($fp)    # t0 = 返回值
        	addi	$sp, $sp, 16  # 恢复堆栈
        	lw	$fp, 0($sp)     # pop fp
        	addi	$sp, $sp, 4
        	ret
        $func_end0:

2. 取地址

        test_get_addr:
        	.frame	$fp,8,$sp
        # BB#0:
          # 建立堆栈
        	addi	$sp, $sp, -4
        	sw	0($sp), $fp
        	addi	$fp, $sp, 0
        	addi	$sp, $sp, -8
          # 函数开始
        	addi	$t0, $fp, -4	; lea t0, fp[4]

          # 恢复堆栈
        	addi	$sp, $sp, 8
        	lw	$fp, 0($sp)
        	addi	$sp, $sp, 4
        	ret
