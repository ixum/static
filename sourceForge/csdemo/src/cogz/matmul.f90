subroutine matrix_add(A, rows_A, cols_A, B, rows_B, cols_B, C, rows_C, cols_C) bind(c)
    use iso_c_binding   ! use, intrinsic :: iso_c_binding
    integer(c_int) :: rows_A, cols_A, rows_B, cols_B, rows_C, cols_C
    real(c_double) :: A(rows_A, cols_A), B(rows_B, cols_B), C(rows_C, cols_C)

    C = A + B
end subroutine matrix_add
