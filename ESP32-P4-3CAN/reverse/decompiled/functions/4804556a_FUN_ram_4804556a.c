/* Firmware entry: 0x4804556a */

undefined4 FUN_ram_4804556a(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1 + 0x297,0xffffffff);
  piVar1 = (int *)*param_1;
  FUN_ram_4ff3ee10(param_1 + 0x297);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x480455ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0x154))(piVar1,param_2);
    return uVar2;
  }
  return 0;
}


