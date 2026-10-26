/* Firmware entry: 0x481845d4 */

undefined4 FUN_ram_481845d4(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *(uint *)(param_1 + 0x150);
  uVar6 = *(uint *)(param_1 + 0x154);
  uVar7 = param_3 + uVar2;
  uVar8 = (uVar7 < param_3) + uVar6;
  if ((uVar8 < uVar6) || ((uVar6 == uVar8 && (uVar7 < uVar2)))) {
    uVar4 = 0xffffffec;
  }
  else if (uVar8 >> 0x1d == 0) {
    uVar5 = uVar2 & 0xf;
    pbVar12 = param_2;
    if (uVar5 != 0) {
      uVar8 = 0x10 - uVar5;
      if (param_3 < 0x10 - uVar5) {
        uVar8 = param_3;
      }
      if (uVar8 != 0) {
        pbVar12 = param_2 + uVar8;
        pbVar11 = (byte *)(uVar5 + 0x178 + param_1);
        do {
          bVar1 = *param_2;
          param_2 = param_2 + 1;
          *pbVar11 = *pbVar11 ^ bVar1;
          pbVar11 = pbVar11 + 1;
        } while (pbVar12 != param_2);
        if ((uVar5 + uVar8 == 0x10) && (*(char *)(param_1 + 0x189) == '\0')) {
          FUN_ram_48183e34(param_1 + 0x178,param_1 + 0x178,param_1 + 0x48);
          uVar2 = *(uint *)(param_1 + 0x150);
          uVar6 = *(uint *)(param_1 + 0x154);
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x150);
          uVar6 = *(uint *)(param_1 + 0x154);
        }
      }
      param_3 = param_3 - uVar8;
      uVar5 = uVar8 + param_3;
      uVar7 = uVar5 + uVar2;
      uVar8 = (uint)(uVar7 < uVar5) + (uVar5 < uVar8) + uVar6;
    }
    *(uint *)(param_1 + 0x150) = uVar7;
    *(uint *)(param_1 + 0x154) = uVar8;
    if (0xf < param_3) {
      pbVar13 = (byte *)(param_1 + 0x178);
      pbVar11 = pbVar12;
      pbVar3 = pbVar13;
      pbVar10 = pbVar12;
      do {
        do {
          pbVar9 = pbVar3 + 1;
          *pbVar3 = *pbVar3 ^ *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar3 = pbVar9;
        } while ((byte *)(param_1 + 0x188) != pbVar9);
        if (*(char *)(param_1 + 0x189) == '\0') {
          FUN_ram_48183e34(pbVar13,pbVar13,param_1 + 0x48);
        }
        pbVar11 = pbVar10 + 0x10;
        pbVar3 = pbVar13;
        pbVar10 = pbVar11;
      } while (pbVar11 != pbVar12 + (param_3 - 0x10 & 0xfffffff0) + 0x10);
      pbVar12 = pbVar12 + (param_3 - 0x10 & 0xfffffff0) + 0x10;
      param_3 = param_3 & 0xf;
    }
    if (param_3 != 0) {
      pbVar11 = (byte *)(param_1 + 0x178);
      do {
        bVar1 = *pbVar12;
        pbVar3 = pbVar11 + 1;
        pbVar12 = pbVar12 + 1;
        *pbVar11 = *pbVar11 ^ bVar1;
        pbVar11 = pbVar3;
      } while ((byte *)(param_1 + 0x178) + param_3 != pbVar3);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffec;
  }
  return uVar4;
}


