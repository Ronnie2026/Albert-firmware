/* Firmware entry: 0x4814cf16 */

undefined4 FUN_ram_4814cf16(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 auStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_1c = param_2;
  uStack_18 = param_4;
  auStack_14[0] = param_3;
  FUN_ram_4813985e(*(undefined4 *)(param_1 + 0x1c),&uStack_1c,&uStack_18,auStack_14);
  return 1;
}


