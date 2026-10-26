/* Firmware entry: 0x4817ea52 */

void FUN_ram_4817ea52(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4817e59c();
  if ((iVar3 == 0) && (uVar15 = (uint)*param_1, uVar15 != 0)) {
    iVar3 = 0;
    uVar2 = uVar15;
    pbVar4 = param_1 + uVar15 * 0x10 + 0x10;
    do {
      puVar10 = (undefined4 *)(((int)(param_1 + uVar15 * 8) * 2 + 0x14) - (int)pbVar4);
      pbVar12 = pbVar4 + -0x10;
      do {
        pbVar1 = pbVar12 + 4;
        uVar7 = *puVar10;
        pbVar12 = pbVar12 + 4;
        *puVar10 = *(undefined4 *)pbVar1;
        *(undefined4 *)pbVar12 = uVar7;
        puVar10 = puVar10 + 1;
      } while (pbVar4 != pbVar12);
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 - 1;
      pbVar4 = pbVar4 + -0x10;
    } while (iVar3 < (int)uVar2);
    if (uVar15 != 1) {
      puVar13 = (uint *)(param_1 + 0x14);
      do {
        uVar8 = puVar13[1];
        uVar2 = *puVar13;
        uVar11 = puVar13[2] >> 8 & 0xff00ff | (puVar13[2] & 0xff00ff) << 8;
        uVar6 = puVar13[3] << 0x10 | puVar13[3] >> 0x10;
        uVar16 = uVar8 << 0x10 | uVar8 >> 0x10;
        uVar17 = uVar2 << 0x10 | uVar2 >> 0x10;
        uVar18 = uVar6 >> 8 & 0xff00ff | (uVar6 & 0xff00ff) << 8;
        uVar6 = (uVar11 >> 0x10 | uVar11 << 0x10) ^ uVar6;
        uVar5 = (uVar16 >> 8 & 0xff00ff | (uVar16 & 0xff00ff) << 8) ^ uVar17;
        uVar8 = uVar18 ^ uVar17 ^
                ((uVar8 ^ uVar11) >> 8 & 0xff00ff | ((uVar8 ^ uVar11) & 0xff00ff) << 8);
        uVar14 = uVar5 << 0x10 | uVar5 >> 0x10;
        uVar17 = uVar8 << 0x10 | uVar8 >> 0x10;
        uVar9 = (uVar6 << 0x10 | uVar6 >> 0x10) ^ uVar8;
        puVar13[1] = uVar2 ^ uVar6 ^ uVar8;
        puVar13[3] = (uVar17 >> 8 & 0xff00ff | (uVar17 & 0xff00ff) << 8) ^ uVar11 ^ uVar5;
        puVar13[2] = (uVar14 >> 8 & 0xff00ff | (uVar14 & 0xff00ff) << 8) ^ uVar17 ^ uVar18;
        *puVar13 = (uVar9 >> 8 & 0xff00ff | (uVar9 & 0xff00ff) << 8) ^ uVar16;
        puVar13 = puVar13 + 4;
      } while ((uint *)(param_1 + uVar15 * 0x10 + 4) != puVar13);
    }
  }
  return;
}


