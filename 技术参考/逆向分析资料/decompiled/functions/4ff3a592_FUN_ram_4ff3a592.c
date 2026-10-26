/* Firmware entry: 0x4ff3a592 */

int FUN_ram_4ff3a592(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uStack_18;
  int aiStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_18 = 0;
  aiStack_14[0] = 0;
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  if (param_2 != (undefined4 *)0x0) {
    iVar1 = FUN_ram_4ff3a142(aiStack_14,&uStack_18);
    if (iVar1 == 0) {
      *param_1 = *(undefined4 *)(aiStack_14[0] + 0xc);
      *param_2 = uStack_18;
      return 0;
    }
    return iVar1;
  }
  return 0x102;
}


