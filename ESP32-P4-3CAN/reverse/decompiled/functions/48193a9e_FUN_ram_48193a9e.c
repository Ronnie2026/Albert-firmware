/* Firmware entry: 0x48193a9e */

void FUN_ram_48193a9e(void)

{
  undefined4 *unaff_s0;
  int iVar1;
  undefined4 in_stack_0000000c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0();
  iVar1 = FUN_ram_4819216a(*unaff_s0,&stack0x0000000c);
  if (iVar1 == 0) {
    FUN_ram_481933fa();
  }
  else {
    FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0();
  }
  FUN_ram_48191efe(*unaff_s0);
  *unaff_s0 = 0;
  unaff_s0[0x1b] = 0xffffffff;
  FUN_ram_48193a8c(0xffffffff);
  return;
}


