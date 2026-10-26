/* Firmware entry: 0x4805d48e */

void FUN_ram_4805d48e(int param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  undefined4 local_30;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_2 + 4) == 0) {
    return;
  }
  if (*param_2 == '\x0f') {
    if ((param_2[0x11] != '\0') ||
       (puVar2 = *(undefined4 **)(param_1 + 0x9d0), puVar2 == (undefined4 *)0x0)) {
      return;
    }
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 0x9d0);
    if (puVar2 == (undefined4 *)0x0) {
LAB_ram_4805d4d4:
      if (*param_2 != '\x0e') {
        return;
      }
      FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
      if ((param_2[0x10] == '\0') && (param_2[0x11] == '\0')) {
        if (param_2[8] == '\0') {
          *(int *)(param_1 + 0x10cc) = *(int *)(param_1 + 0x10cc) + 1;
        }
        else {
          *(int *)(param_1 + 0x10c8) = *(int *)(param_1 + 0x10c8) + 1;
        }
      }
      else {
        *(int *)(param_1 + 0x10d0) = *(int *)(param_1 + 0x10d0) + 1;
      }
      *(undefined4 *)(param_1 + 0x10e8) = *(undefined4 *)(param_2 + 0x18);
      goto LAB_ram_4805d630;
    }
  }
  puVar9 = puVar2 + 0x12b0;
  while (*(int *)(param_2 + 4) != puVar2[1]) {
    puVar2 = puVar2 + 0x1a;
    if (puVar2 == puVar9) goto LAB_ram_4805d4d4;
  }
  FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
  cVar1 = param_2[0x10];
  uVar10 = (uint)*(byte *)((int)puVar2 + 0xf);
  iVar6 = puVar2[0x19];
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  if ((cVar1 == '\0') && (param_2[0x11] == '\0')) {
    if (param_2[8] == '\0') {
      iVar6 = uVar10 * 0x48 + param_1;
      *(undefined4 *)(iVar6 + 0xc20) = uVar3;
      *(int *)(iVar6 + 0xc04) = *(int *)(iVar6 + 0xc04) + 1;
    }
    else {
      iVar11 = uVar10 * 0x48 + param_1;
      *(undefined4 *)(iVar11 + 0xc20) = uVar3;
      *(int *)(iVar11 + 0xc00) = *(int *)(iVar11 + 0xc00) + 1;
      if (iVar6 != 0) goto LAB_ram_4805d66e;
    }
  }
  else {
    iVar11 = uVar10 * 0x48 + param_1;
    *(undefined4 *)(iVar11 + 0xc20) = uVar3;
    *(int *)(iVar11 + 0xc08) = *(int *)(iVar11 + 0xc08) + 1;
    if ((iVar6 != 0) && ((param_2[8] != '\0' && (cVar1 == '\0')))) {
LAB_ram_4805d66e:
      fence();
      if ((*(char *)(param_1 + 0x7a14) != '\0') && (fence(), *(int *)(param_1 + 0x7a48) == iVar6)) {
        *(int *)(param_1 + 0x7a44) = *(int *)(param_1 + 0x7a44) + 1;
      }
    }
  }
  if (*(char *)(puVar2 + 0x18) == '\0') goto LAB_ram_4805d556;
  cVar1 = *(char *)(puVar2 + 6);
  iVar6 = 2;
  if (cVar1 == '\x02') {
    iVar6 = 1;
  }
  else if (cVar1 != '\x04') {
    if (cVar1 != '\x01') goto LAB_ram_4805d556;
    iVar6 = 0;
  }
  uVar10 = (uint)*(byte *)((int)puVar2 + 0x19);
  if (0x17 < uVar10) goto LAB_ram_4805d556;
  iVar11 = puVar2[8];
  iVar12 = puVar2[9];
  if (uVar10 < 0x10) {
    if (iVar11 == 0 && iVar12 == 0) goto LAB_ram_4805d556;
    iVar6 = uVar10 * 0xe8 + iVar6 * 0x1228 + 0x3a40;
  }
  else {
    iVar6 = (uVar10 - 0x10) * 0x120;
    iVar7 = param_1 + iVar6;
    if (((*(char *)(iVar7 + 0x70d6) == '\0') || (*(char *)(iVar7 + 0x70b8) != cVar1)) ||
       (iVar11 == 0 && iVar12 == 0)) goto LAB_ram_4805d556;
    iVar6 = iVar6 + 0x70f0;
  }
  iVar6 = param_1 + iVar6;
  if (((*(int *)(iVar6 + 0xd8) == iVar11) && (*(int *)(iVar6 + 0xdc) == iVar12)) &&
     ((*(char *)(iVar6 + 0x51) != '\0' && (*(char *)(iVar6 + 0xe6) == '\x04')))) {
    bVar8 = *(byte *)(iVar6 + 0x52);
    local_30 = (uint)CONCAT11(*(byte *)((int)puVar2 + 0x19),cVar1);
    pbVar14 = (byte *)(iVar6 + 0x58);
    bVar5 = 0;
    if (bVar8 != 0) {
      do {
        bVar5 = bVar5 + 1;
        iVar13 = (uint)*pbVar14 * 0x120;
        iVar7 = param_1 + iVar13;
        if (((*pbVar14 < 8) && (*(int *)(pbVar14 + 8) != 0 || *(int *)(pbVar14 + 0xc) != 0)) &&
           ((*(char *)(iVar7 + 0x70d6) != '\0' &&
            ((((*(int *)(iVar7 + 0x70c8) == *(int *)(pbVar14 + 8) &&
               (iVar4 = iVar13 + 0x70b8 + param_1,
               *(int *)(iVar7 + 0x70cc) == *(int *)(pbVar14 + 0xc))) &&
              (((local_30 ^ *(uint *)(iVar4 + 0x28)) & 0xffff) == 0)) &&
             ((*(int *)(iVar4 + 0x30) == iVar11 && (*(int *)(iVar4 + 0x34) == iVar12)))))))) {
          *(undefined2 *)(iVar13 + param_1 + 0x70e0) = 0xff00;
          *(undefined4 *)(iVar7 + 0x70e8) = 0;
          *(undefined4 *)(iVar7 + 0x70ec) = 0;
          bVar8 = *(byte *)(iVar6 + 0x52);
        }
        pbVar14 = pbVar14 + 0x18;
      } while (bVar5 < bVar8);
    }
    FUN_ram_480464d6();
  }
LAB_ram_4805d556:
  pbVar14 = (byte *)(puVar2 + 0xc);
  bVar8 = 0;
  if (*(char *)(puVar2 + 10) != '\0') {
    do {
      while( true ) {
        uVar10 = (uint)*pbVar14;
        iVar11 = *(int *)(pbVar14 + 8);
        iVar6 = *(int *)(pbVar14 + 0xc);
        if (((uVar10 < 8) && (iVar11 != 0 || iVar6 != 0)) &&
           ((iVar12 = uVar10 * 0x120 + param_1, *(char *)(iVar12 + 0x70d6) != '\0' &&
            (((*(int *)(iVar12 + 0x70c8) == iVar11 && (*(int *)(iVar12 + 0x70cc) == iVar6)) &&
             (*(short *)(iVar12 + 0x70d4) != 0)))))) {
          *(short *)(iVar12 + 0x70d4) = *(short *)(iVar12 + 0x70d4) + -1;
        }
        iVar12 = uVar10 * 0x28 + param_1;
        if (((*(byte *)(iVar12 + 0x9d8) != uVar10) || (*(int *)(iVar12 + 0x9e0) != iVar11)) ||
           ((*(int *)(iVar12 + 0x9e4) != iVar6 || (*(short *)(iVar12 + 0x9f8) == 0)))) break;
        *(short *)(iVar12 + 0x9f8) = *(short *)(iVar12 + 0x9f8) + -1;
        bVar8 = bVar8 + 1;
        pbVar14 = pbVar14 + 0x10;
        if (*(byte *)(puVar2 + 10) <= bVar8) goto LAB_ram_4805d606;
      }
      bVar8 = bVar8 + 1;
      pbVar14 = pbVar14 + 0x10;
    } while (bVar8 < *(byte *)(puVar2 + 10));
  }
LAB_ram_4805d606:
  *(undefined1 *)(puVar2 + 10) = 0;
  *(undefined2 *)(puVar2 + 6) = 0xff00;
  puVar2[1] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined1 *)(puVar2 + 0x18) = 0;
  puVar2[0x19] = 0;
  *puVar2 = 0;
LAB_ram_4805d630:
  FUN_ram_4ff3ee10(param_1 + 0xb20);
  return;
}


