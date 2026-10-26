/* Firmware entry: 0x480ca6fa */

void FUN_ram_480ca6fa(int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  byte bVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 local_c4;
  undefined4 auStack_c0 [3];
  char cStack_b2;
  byte bStack_b1;
  char cStack_9f;
  byte bStack_9e;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar13 = (uint *)param_1[3];
  fence();
  uVar12 = *puVar13;
  do {
    uVar5 = uVar12 + 1;
    if ((int)uVar12 < 0) {
      return;
    }
    if ((uVar12 & 0xffff) == 0xffff) {
      return;
    }
    bVar1 = *puVar13 != uVar12;
    uVar12 = *puVar13;
  } while (bVar1);
  *puVar13 = uVar5;
  iVar3 = *param_1;
  FUN_ram_4ff3ec14(iVar3 + 0xb18,0xffffffff);
  puVar11 = (undefined4 *)(iVar3 + 0xb38);
  puVar9 = &local_c4;
  do {
    uVar4 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    *puVar9 = *puVar11;
    puVar9[1] = uVar4;
    puVar9[2] = uVar6;
    puVar9[3] = uVar7;
    puVar11 = puVar11 + 4;
    puVar9 = puVar9 + 4;
  } while (puVar11 != (undefined4 *)(iVar3 + 0xbd8));
  *puVar9 = *puVar11;
  FUN_ram_4ff3ee10(iVar3 + 0xb18);
  if (*(byte *)(param_2 + 4) < 6) goto LAB_ram_480ca862;
  bVar10 = *(byte *)(param_2 + 10) >> 5;
  *(byte *)((int)param_1 + 0x295) = bVar10;
  if (bVar10 == 2) {
    cVar2 = *(char *)((int)param_1 + 0x17d);
    *(undefined1 *)((int)param_1 + 0x17d) = 1;
    bVar1 = cVar2 != '\x01';
    uVar8 = 2;
LAB_ram_480ca7c6:
    *(undefined1 *)((int)param_1 + 0x296) = uVar8;
  }
  else {
    if (2 < bVar10) {
      if ((byte)(bVar10 - 3) < 2) {
        cVar2 = *(char *)((int)param_1 + 0x17d);
        *(undefined1 *)((int)param_1 + 0x17d) = 0;
        bVar1 = cVar2 != '\0';
        uVar8 = bVar10 != 4;
      }
      else {
        uVar8 = 4;
        bVar1 = false;
        if (bVar10 != 5) goto LAB_ram_480ca7ca;
      }
      goto LAB_ram_480ca7c6;
    }
    bVar1 = false;
    if (bVar10 == 1) {
      cVar2 = *(char *)((int)param_1 + 0x17d);
      uVar8 = 3;
      *(undefined1 *)((int)param_1 + 0x17d) = 2;
      bVar1 = cVar2 != '\x02';
      goto LAB_ram_480ca7c6;
    }
  }
LAB_ram_480ca7ca:
  FUN_ram_4ff3ec14(param_1[2],0xffffffff);
  uVar8 = 0;
  *(byte *)(param_1[1] + 0x7fd) = bVar10;
  bVar10 = *(byte *)((int)param_1 + 0x17d);
  *(byte *)(param_1[1] + 0x7ff) = bVar10;
  if (cStack_b2 != '\0') {
    if (bStack_b1 == 3) {
      bVar10 = 2;
    }
    else {
      bVar10 = bStack_b1;
      if (2 < bStack_b1) {
        bVar10 = 1;
        uVar8 = 1;
        goto LAB_ram_480ca806;
      }
    }
    uVar8 = 1;
  }
LAB_ram_480ca806:
  *(byte *)(param_1[1] + 0x7fe) = bVar10;
  *(undefined1 *)(param_1[1] + 0x800) = uVar8;
  bVar10 = *(byte *)((int)param_1 + 0x296);
  uVar8 = 0;
  *(byte *)(param_1[1] + 0x801) = bVar10;
  if (cStack_9f != '\0') {
    bVar10 = bStack_9e;
    if (4 < bStack_9e) {
      bVar10 = 2;
    }
    uVar8 = 1;
  }
  *(byte *)(param_1[1] + 0x802) = bVar10;
  *(undefined1 *)(param_1[1] + 0x803) = uVar8;
  FUN_ram_4ff3ee10(param_1[2]);
  if (((local_c4._1_1_ == '\f') && (bVar1)) && (cStack_b2 == '\0')) {
    uVar4 = FUN_ram_48025ba6();
    FUN_ram_480c90ae(param_1,&local_c4,uVar4);
  }
  FUN_ram_4809ec88(param_1,&local_c4);
LAB_ram_480ca862:
  fence();
  uVar12 = *puVar13;
  while( true ) {
    uVar5 = uVar12 - 1;
    if ((int)uVar12 < 0) {
      return;
    }
    if ((uVar12 & 0xffff) == 0) break;
    bVar1 = *puVar13 == uVar12;
    uVar12 = *puVar13;
    if (bVar1) {
      *puVar13 = uVar5;
      return;
    }
  }
  return;
}


