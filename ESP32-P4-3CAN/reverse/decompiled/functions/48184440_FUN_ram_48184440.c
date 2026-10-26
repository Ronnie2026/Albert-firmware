/* Firmware entry: 0x48184440 */

undefined4 FUN_ram_48184440(int param_1,undefined1 param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined4 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *__s;
  uint uVar17;
  undefined4 uStack_44;
  byte local_40 [8];
  undefined8 uStack_38;
  byte abStack_30 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_44 = 0;
  if (param_4 == 0) {
    uVar12 = 0xffffffec;
  }
  else {
    __s = (byte *)(param_1 + 0x168);
    memset(__s,0,0x10);
    memset((void *)(param_1 + 0x178),0,0x10);
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined1 *)(param_1 + 0x188) = param_2;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
    if (param_4 == 0xc) {
      bVar1 = param_3[0xb];
      bVar2 = param_3[1];
      bVar3 = param_3[2];
      bVar4 = param_3[3];
      bVar5 = param_3[4];
      bVar6 = param_3[5];
      bVar7 = param_3[6];
      bVar8 = param_3[7];
      bVar9 = param_3[8];
      bVar10 = param_3[9];
      bVar11 = param_3[10];
      *(byte *)(param_1 + 0x168) = *param_3;
      *(byte *)(param_1 + 0x173) = bVar1;
      *(byte *)(param_1 + 0x169) = bVar2;
      *(byte *)(param_1 + 0x16a) = bVar3;
      *(byte *)(param_1 + 0x16b) = bVar4;
      *(byte *)(param_1 + 0x16c) = bVar5;
      *(byte *)(param_1 + 0x16d) = bVar6;
      *(byte *)(param_1 + 0x16e) = bVar7;
      *(byte *)(param_1 + 0x16f) = bVar8;
      *(byte *)(param_1 + 0x170) = bVar9;
      *(byte *)(param_1 + 0x171) = bVar10;
      *(byte *)(param_1 + 0x172) = bVar11;
      *(undefined1 *)(param_1 + 0x177) = 1;
    }
    else {
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      local_40[4] = 0;
      local_40[5] = 0;
      local_40[6] = 0;
      local_40[7] = 0;
      uStack_38 = __bswapdi2(param_4 << 3,param_4 >> 0x1d);
      pbVar16 = local_40;
      do {
        uVar17 = param_4;
        if (0x10 < param_4) {
          uVar17 = 0x10;
        }
        pbVar13 = param_3;
        pbVar14 = __s;
        do {
          bVar1 = *pbVar13;
          pbVar15 = pbVar14 + 1;
          pbVar13 = pbVar13 + 1;
          *pbVar14 = *pbVar14 ^ bVar1;
          pbVar14 = pbVar15;
        } while (pbVar15 != __s + uVar17);
        if (*(char *)(param_1 + 0x189) == '\0') {
          FUN_ram_48183e34(__s,__s,param_1 + 0x48);
        }
        param_4 = param_4 - uVar17;
        param_3 = param_3 + uVar17;
        pbVar13 = __s;
      } while (param_4 != 0);
      do {
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + 1;
        *pbVar13 = *pbVar13 ^ bVar1;
        pbVar13 = pbVar13 + 1;
      } while (pbVar16 != abStack_30);
      if (*(char *)(param_1 + 0x189) == '\0') {
        FUN_ram_48183e34(__s,__s,param_1 + 0x48);
      }
    }
    uVar12 = FUN_ram_48171b10(param_1,__s,0x10,param_1 + 0x158,&uStack_44);
  }
  return uVar12;
}


