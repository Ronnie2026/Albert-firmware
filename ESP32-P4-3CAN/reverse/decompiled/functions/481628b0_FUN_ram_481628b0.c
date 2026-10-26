/* Firmware entry: 0x481628b0 */

int FUN_ram_481628b0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_1c = *(int *)(param_1 + 0x40);
  iStack_48 = (-(uint)((param_2 & 0xff8000) == 0) & 0xffffff00) + 0x1aa;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  iStack_20 = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_24 = 0x1c30;
  uStack_4c = 8;
  if (iStack_1c == 0) {
    iStack_1c = 1000;
  }
  iVar1 = (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 4),&uStack_4c);
  if (((iVar1 == 0) && (iVar1 = iStack_20, iStack_20 == 0)) && ((char)uStack_44 != -0x56)) {
    return 0x108;
  }
  return iVar1;
}


