/* Firmware entry: 0x4815933c */

undefined4 FUN_ram_4815933c(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (param_3 == (int *)0x0)) {
    return 0x5001;
  }
  if ((char)param_3[5] == '\0') {
    if (*param_3 == 0) {
      return 0x5001;
    }
  }
  else if (((((char)param_3[5] == '\x06') && (*param_3 == 0)) && (param_3[1] == 0)) &&
          ((param_3[2] == 0 && (param_3[3] == 0)))) {
    return 0x5001;
  }
  puStack_14 = &uStack_2c;
  uStack_24 = 0;
  uStack_20 = 0;
  pcStack_1c = FUN_ram_48156e8a;
  uStack_2c = param_2;
  piStack_28 = param_3;
  iStack_18 = param_1;
  iVar1 = FUN_ram_4814e864(0);
  if (iVar1 != 0) {
    uVar2 = (*pcStack_1c)(&uStack_24);
    return uVar2;
  }
  FUN_ram_4814e408(&DAT_ram_4ff6e254,0);
  FUN_ram_481378ce(&LAB_ram_48156898,&uStack_24,&DAT_ram_4ff6e258);
  FUN_ram_4814e3a4(&DAT_ram_4ff6e254);
  return uStack_20;
}


