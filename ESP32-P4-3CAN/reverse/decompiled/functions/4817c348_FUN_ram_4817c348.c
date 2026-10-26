/* Firmware entry: 0x4817c348 */

void FUN_ram_4817c348(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                     undefined4 *param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4818006c(param_2);
  if (iVar1 != 0) {
    FUN_ram_4818b4fe(param_6 + -1);
    FUN_ram_4818b508(0,0,*param_1,*(undefined2 *)((int)param_1 + 6),param_6);
    FUN_ram_4818b508(1,0,*param_2,*(undefined2 *)((int)param_2 + 6),param_6);
    FUN_ram_4818b508(3,0,*param_3,*(undefined2 *)((int)param_3 + 6),param_6);
    FUN_ram_4818b508(2,0,*param_4,*(undefined2 *)((int)param_4 + 6),param_6);
    FUN_ram_4818b58c(param_5);
    FUN_ram_4818b5a2(0);
    FUN_ram_4818b5b6(1);
    FUN_ram_4818b5ca(iVar1 + -1);
    FUN_ram_4818b5d4(2);
    FUN_ram_4818b5b6(0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("bignum_alt.c",0xcd,"esp_mpi_exp_mpi_mod_hw_op","y_bits != 0");
}


