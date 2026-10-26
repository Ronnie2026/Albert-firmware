/* Firmware entry: 0x481849c4 */

undefined4
FUN_ram_481849c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,byte *param_5
                ,int param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte abStack_30 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar8 = (byte *)&local_40;
  uVar7 = *(uint *)(param_1 + 0x148);
  iVar5 = *(int *)(param_1 + 0x14c);
  uVar4 = *(uint *)(param_1 + 0x150);
  iVar2 = *(int *)(param_1 + 0x154);
  *param_4 = 0;
  uVar10 = uVar7 >> 0x1d | iVar5 << 3;
  uVar3 = iVar2 << 3 | uVar4 >> 0x1d;
  if (iVar5 == 0 && uVar7 == 0) {
    if (((uVar4 & 0xf) != 0) && (*(char *)(param_1 + 0x189) == '\0')) {
      FUN_ram_48183e34(param_1 + 0x178,param_1 + 0x178,param_1 + 0x48);
    }
    if (0xc < param_6 - 4U) {
      return 0xffffffec;
    }
  }
  else {
    if (0xc < param_6 - 4U) {
      return 0xffffffec;
    }
    if (((uVar7 & 0xf) != 0) && (*(char *)(param_1 + 0x189) == '\0')) {
      FUN_ram_48183e34(param_1 + 0x178,param_1 + 0x178,param_1 + 0x48);
    }
  }
  FUN_ram_4ff45158(param_5,param_1 + 0x158,param_6);
  if (((uVar7 | uVar4) & 0x1fffffff) != 0 || (uVar10 != 0 || uVar3 != 0)) {
    local_40 = __bswapsi2(uVar3);
    uStack_3c = __bswapsi2(uVar4 << 3);
    uStack_38 = __bswapsi2(uVar10);
    uStack_34 = __bswapsi2(uVar7 << 3);
    pbVar6 = (byte *)(param_1 + 0x178);
    pbVar9 = pbVar6;
    do {
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      *pbVar9 = *pbVar9 ^ bVar1;
      pbVar9 = pbVar9 + 1;
    } while (pbVar8 != abStack_30);
    if (*(char *)(param_1 + 0x189) == '\0') {
      FUN_ram_48183e34(pbVar6,pbVar6,param_1 + 0x48);
    }
    if (param_6 != 0) {
      pbVar8 = param_5;
      do {
        bVar1 = *pbVar6;
        pbVar9 = pbVar8 + 1;
        pbVar6 = pbVar6 + 1;
        *pbVar8 = *pbVar8 ^ bVar1;
        pbVar8 = pbVar9;
      } while (param_5 + param_6 != pbVar9);
    }
  }
  return 0;
}


