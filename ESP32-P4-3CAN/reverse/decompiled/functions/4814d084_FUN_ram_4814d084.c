/* Firmware entry: 0x4814d084 */

undefined4 FUN_ram_4814d084(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_24 = 0x80fe;
  uStack_20 = 0;
  uStack_1c = param_2;
  uStack_18 = param_3;
  FUN_ram_4813a4a4(*(undefined4 *)(param_1 + 0x1c),0,&uStack_24);
  FUN_ram_4813a504(*(undefined4 *)(param_1 + 0x1c),0,0x30);
  return 1;
}


