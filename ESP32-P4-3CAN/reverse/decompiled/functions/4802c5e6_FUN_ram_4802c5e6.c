/* Firmware entry: 0x4802c5e6 */

void FUN_ram_4802c5e6(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 *param_4,
                     int param_5)

{
  int iVar1;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_2[4];
  if ((*(char *)((int)param_2 + 0xe) == '\0') && (iVar1 == 0)) {
    iVar1 = FUN_ram_48025b94();
  }
  uStack_6c = *param_2;
  uStack_68 = param_2[1];
  uStack_64 = param_2[2];
  uStack_60 = param_2[3];
  uStack_5c = param_2[4];
  uStack_58 = param_2[5];
  uStack_54 = param_2[6];
  uStack_50 = param_2[7];
  uStack_4c = param_2[8];
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if (param_4 == (undefined4 *)0x0) {
    uStack_44 = 0xff;
LAB_ram_4802c6d8:
    if (((param_3 == 0) || (DAT_ram_4ff6dfd8 == (code *)0x0)) ||
       (iVar1 = (*DAT_ram_4ff6dfd8)(&uStack_6c,DAT_ram_4ff6dfe4,iVar1,&uStack_48), iVar1 == 0)) {
      uStack_44._0_3_ = (uint3)(ushort)uStack_44;
      if ((DAT_ram_4ff6dfdc != (code *)0x0) && (param_5 != 0)) {
        (*DAT_ram_4ff6dfdc)(&uStack_6c,DAT_ram_4ff6dfe4);
      }
      goto LAB_ram_4802c6b4;
    }
  }
  else {
    uStack_44 = param_4[1];
    uStack_48 = *param_4;
    uStack_40 = param_4[2];
    uStack_3c = param_4[3];
    uStack_38 = param_4[4];
    uStack_34 = param_4[5];
    uStack_30 = param_4[6];
    uStack_2c = param_4[7];
    uStack_28 = param_4[8];
    uStack_24 = (uint)*(byte *)(param_4 + 9);
    if ((uStack_44 >> 0x10 & 0xff) == 0) goto LAB_ram_4802c6d8;
  }
  uStack_44._0_3_ = CONCAT12(1,(ushort)uStack_44);
  if (DAT_ram_4ff6dfac != (code *)0x0) {
    (*DAT_ram_4ff6dfac)(&uStack_6c,DAT_ram_4ff6dfe4,&uStack_48,param_5);
  }
LAB_ram_4802c6b4:
  *(short *)*param_1 = *(short *)*param_1 + 1;
  return;
}


