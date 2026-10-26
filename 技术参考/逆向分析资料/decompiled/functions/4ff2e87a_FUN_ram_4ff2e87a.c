/* Firmware entry: 0x4ff2e87a */

void FUN_ram_4ff2e87a(int param_1,int param_2)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_1c = *(undefined4 *)(param_2 + 0x18);
  uStack_18 = *(undefined4 *)(param_2 + 0x1c);
  uStack_14 = *(undefined1 *)(param_1 + 0x15);
  uStack_13 = *(undefined1 *)(param_1 + 0x17);
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  iStack_20 = param_2;
  FUN_ram_4ff42bd4(&iStack_20,&local_30);
  FUN_ram_4ff42fd2(param_1,&local_30,0);
  return;
}


