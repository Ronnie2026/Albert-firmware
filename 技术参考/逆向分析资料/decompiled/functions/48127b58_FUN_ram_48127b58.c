/* Firmware entry: 0x48127b58 */

undefined4 FUN_ram_48127b58(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined1 uStack_18;
  char cStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*(int *)(param_2 + 4) == 0) || (2 < param_3)) ||
     (iVar1 = FUN_ram_481593e0(*(int *)(param_2 + 4),param_3,&uStack_28), iVar1 != 0)) {
    FUN_ram_48121726(param_1);
  }
  else {
    if (cStack_14 != '\x06') {
      FUN_ram_4812181e(param_1);
      return param_1;
    }
    FUN_ram_4812179a(param_1,uStack_28 & 0xff,(uStack_28 & 0xff00) >> 8,
                     (uStack_28 >> 8 & 0xff00) >> 8,uStack_28 >> 0x18,uStack_24 & 0xff,
                     (uStack_24 & 0xff00) >> 8,(uStack_24 >> 8 & 0xff00) >> 8,uStack_24 >> 0x18,
                     uStack_20 & 0xff,(uStack_20 & 0xff00) >> 8,(uStack_20 >> 8 & 0xff00) >> 8,
                     uStack_20 >> 0x18,uStack_1c & 0xff,(uStack_1c & 0xff00) >> 8,
                     (uStack_1c >> 8 & 0xff00) >> 8,uStack_1c >> 0x18,uStack_18);
  }
  return param_1;
}


