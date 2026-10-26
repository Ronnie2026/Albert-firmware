/* Firmware entry: 0x48163054 */

void FUN_ram_48163054(uint *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uStack_4c;
  int iStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_1c = param_1[0x10];
  iStack_48 = (uint)(ushort)param_1[0x2e] << 0x10;
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
  uStack_24 = 0x1c00;
  uStack_4c = 0xd;
  if (uStack_1c == 0) {
    uStack_1c = 1000;
  }
  iVar1 = (*(code *)param_1[0xc])(param_1[1],&uStack_4c);
  if (((iVar1 == 0) && (iStack_20 == 0)) && (param_2 != (uint *)0x0)) {
    if ((*param_1 & 8) == 0) {
      *param_2 = uStack_44;
      return;
    }
    *param_2 = uStack_44 & 0xffff;
  }
  return;
}


