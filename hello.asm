.text
  li $v0,4
  la $a0,message
  syscall
.data
message:.asciiz "hello, world"