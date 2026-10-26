/* Firmware entry: 0x4816a35c */

void FUN_ram_4816a35c(int param_1,undefined1 param_2,int param_3)

{
  code *pcVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  ushort uStack_12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x40) + 0x14);
  uStack_12 = (ushort)((uint)param_3 >> 8) & 0xff | (ushort)(param_3 << 8);
  uStack_13 = (undefined1)((uint)param_3 >> 0x10);
  uStack_14 = param_2;
  (*pcVar1)(param_1,&uStack_14,4,param_3 << 8,pcVar1);
  return;
}


