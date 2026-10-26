/* Firmware entry: 0x4804210e */

undefined4 FUN_ram_4804210e(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  int *piVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48041ed2(param_1,"sp_target_v2",param_2);
  if (iVar2 == 2) {
    return 2;
  }
  if ((DAT_ram_4ff6dca9 != '\0') && (DAT_ram_4ff6dca8 != '\0')) {
    pbVar7 = (byte *)&DAT_ram_4ff5bd30;
    bVar5 = 0;
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      bVar5 = bVar5 | bVar1;
    } while (pbVar7 != (byte *)&DAT_ram_4ff5bd40);
    if ((bVar5 != 0) && (DAT_ram_4ff5bd40 != 0)) {
      if (param_1 == 0) {
        FUN_ram_4ff45158(param_2,DAT_ram_4ff6dcac + 0x6ba4,0x3e);
        return 1;
      }
      piVar8 = (int *)(DAT_ram_4ff6dcac + 0x3608);
      uVar6 = 0;
      if (*(byte *)(DAT_ram_4ff6dcac + 0x6a08) != 0) {
        do {
          iVar4 = *piVar8;
          piVar8 = piVar8 + 0x68;
          if (param_1 == iVar4) {
            FUN_ram_4ff45158(param_2,DAT_ram_4ff6dcac + uVar6 * 0x1a0 + 0x3768,0x3e);
            return 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != *(byte *)(DAT_ram_4ff6dcac + 0x6a08));
      }
    }
  }
  if (iVar2 != 3) {
    if (iVar2 == 1) {
      return 1;
    }
    uVar3 = FUN_ram_48041ed2(param_1,"sp_target",param_2);
    return uVar3;
  }
  return 0;
}


