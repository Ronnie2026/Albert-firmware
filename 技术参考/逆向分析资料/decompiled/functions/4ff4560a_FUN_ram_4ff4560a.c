/* Firmware entry: 0x4ff4560a */

void FUN_ram_4ff4560a(undefined4 param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 < 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("interrupt.c",0x40,"_global_interrupt_handler",
                     "mcause >= RV_EXTERNAL_INT_OFFSET && \"Interrupt sources must not be mapped to local interrupts\""
                    );
  }
  if (param_2 + -0x10 < 0x20) {
    iVar1 = (mhartid * 0x20 + param_2 + -0x10) * 8;
    if (*(code **)(&DAT_ram_4ff6c1e4 + iVar1) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4ff4563a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(&DAT_ram_4ff6c1e4 + iVar1))(*(undefined4 *)(&DAT_ram_4ff6c1e8 + iVar1));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("interrupt_clic.h",0x81,"assert_valid_rv_int_num",
                   "rv_int_num < RV_EXTERNAL_INT_COUNT && \"Invalid CPU interrupt number\"");
}


