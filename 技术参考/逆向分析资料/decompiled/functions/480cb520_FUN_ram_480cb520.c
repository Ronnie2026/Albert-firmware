/* Firmware entry: 0x480cb520 */

void FUN_ram_480cb520(undefined4 *param_1,char *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 extraout_a1;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  char cVar9;
  undefined1 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_8c [3];
  byte bStack_89;
  char cStack_86;
  undefined4 uStack_88;
  char cStack_84;
  char cStack_83;
  char cStack_82;
  int iStack_78;
  char cStack_58;
  int iStack_4c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar9 = *param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  if (cVar9 == '\n') {
    return;
  }
  uVar3 = FUN_ram_48025ba6();
  iVar4 = FUN_ram_480cab80(param_1,param_2,uVar3);
  *(char *)(param_1 + 4) = (char)iVar4;
  if (iVar4 != 0) {
    return;
  }
  cVar9 = *param_2;
  if (cVar9 == '\x05') {
    if (*(int *)(param_2 + 4) != param_1[99]) {
      return;
    }
    bVar2 = param_2[8];
    cVar9 = *(char *)(param_1 + 100);
    FUN_ram_48049778(param_1 + 0x19,param_1 + 100,bVar2 ^ 1,uVar3);
    param_1[99] = 0;
    if (cVar9 == '\x02') {
      uVar10 = 2;
      cVar9 = '\x02';
      if (bVar2 != 0) {
        uVar10 = 0;
        cVar9 = param_2[0x10] + '\x01';
      }
      FUN_ram_4805c6b0(*param_1,2,cVar9,uVar10);
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined1 *)((int)param_1 + 0x192) = 0;
      if (param_1[99] != 0) goto LAB_ram_480cb818;
    }
    else {
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined1 *)((int)param_1 + 0x192) = 0;
    }
    if (((param_1[0x6e] == 0) && (*(char *)(param_1 + 0x79) == '\0')) &&
       (*(char *)((int)param_1 + 0x9e) == '\0')) {
      *(undefined1 *)((int)param_1 + 0x1e5) = 0;
      FUN_ram_48025ba6();
      if (*(char *)((int)param_1 + 0x65) == '\v') {
        FUN_ram_4805c6b0(*param_1,2,2,7);
      }
      puVar8 = (uint *)param_1[3];
      fence();
      uVar7 = *puVar8;
      do {
        uVar6 = uVar7 & 0xfffcffff;
        if (((uVar7 >> 0x10 & 3) != 1) || ((uVar7 & 0xffff) == 0)) goto LAB_ram_480cb818;
        bVar1 = *puVar8 != uVar7;
        uVar7 = *puVar8;
      } while (bVar1);
      *puVar8 = uVar6 - 1;
    }
LAB_ram_480cb818:
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  if (cVar9 != '\x04') {
    if (cVar9 != '\b') {
      return;
    }
    iVar4 = *(int *)(param_2 + 4);
    if (iVar4 == param_1[0x1ec]) {
      if (param_2[8] == '\0') {
        *(undefined2 *)((int)param_1 + 0x73a) = 0;
        if (param_1[0x1f2] != -1) {
          param_1[0x1f2] = param_1[0x1f2] + 1;
        }
      }
      else {
        *(undefined2 *)((int)param_1 + 0x73a) = 0;
      }
      param_1[0x1ec] = 0;
      *(undefined1 *)(param_1 + 0x1ed) = 0;
      *(undefined1 *)((int)param_1 + 0x7b5) = 0;
      *(undefined1 *)((int)param_1 + 0x7b6) = 0;
      *(undefined1 *)((int)param_1 + 0x7b7) = 0;
      *(undefined1 *)(param_1 + 0x1ee) = 0;
      *(undefined1 *)((int)param_1 + 0x7b9) = 0;
      *(undefined1 *)((int)param_1 + 0x7ba) = 0;
      *(undefined1 *)((int)param_1 + 0x7bb) = 0;
      *(undefined1 *)(param_1 + 0x1ef) = 0;
      *(undefined1 *)((int)param_1 + 0x7bd) = 0;
      *(undefined1 *)((int)param_1 + 0x7be) = 0;
      *(undefined1 *)((int)param_1 + 0x7bf) = 0;
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      *(undefined1 *)((int)param_1 + 0x7c1) = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
    if (iVar4 != param_1[0x1e7]) {
      return;
    }
    FUN_ram_4804afca(param_1 + 0xae,(((byte)param_2[8] ^ 1) & 0x7f) << 1,iVar4,
                     *(undefined4 *)(param_2 + 0xc),param_1 + 0x1e8,uVar3);
    param_1[0x1e7] = 0;
    *(undefined1 *)(param_1 + 0x1e8) = 0;
    *(undefined1 *)((int)param_1 + 0x7a1) = 0;
    *(undefined1 *)((int)param_1 + 0x7a2) = 0;
    *(undefined1 *)((int)param_1 + 0x7a3) = 0;
    *(undefined1 *)(param_1 + 0x1e9) = 0;
    *(undefined1 *)((int)param_1 + 0x7a5) = 0;
    *(undefined1 *)((int)param_1 + 0x7a6) = 0;
    *(undefined1 *)((int)param_1 + 0x7a7) = 0;
    *(undefined1 *)(param_1 + 0x1ea) = 0;
    *(undefined1 *)((int)param_1 + 0x7a9) = 0;
    *(undefined1 *)((int)param_1 + 0x7aa) = 0;
    *(undefined1 *)((int)param_1 + 0x7ab) = 0;
    *(undefined1 *)(param_1 + 0x1eb) = 0;
    *(undefined1 *)((int)param_1 + 0x7ad) = 0;
    FUN_ram_480cb382(param_1,uVar3);
    if ((((*(char *)(param_1 + 499) != '\0') && (param_1[0x1e7] == 0)) &&
        ((*(char *)(param_1 + 0xf8) == '\0' || (param_1[0xf9] != 0)))) &&
       ((((((FUN_ram_4804a1e6(auStack_8c,param_1 + 0xae,uVar3), iStack_4c == 0 &&
            (cStack_84 == '\0')) && (cStack_86 == '\0')) &&
          ((cStack_83 == '\0' && (cStack_82 == '\0')))) && (cStack_58 == '\0')) &&
        ((bStack_89 < 2 || (bStack_89 == 10)))))) {
      puVar8 = (uint *)param_1[3];
      *(undefined1 *)(param_1 + 499) = 0;
      fence();
      uVar7 = *puVar8;
      do {
        uVar6 = uVar7 - 1;
        if (((int)uVar7 < 0) || ((uVar7 & 0xffff) == 0)) goto LAB_ram_480cb818;
        bVar1 = *puVar8 != uVar7;
        uVar7 = *puVar8;
      } while (bVar1);
      *puVar8 = uVar6;
    }
    goto LAB_ram_480cb818;
  }
  if (*(int *)(param_2 + 4) != param_1[0x93]) {
    return;
  }
  puVar11 = param_1 + 0x84;
  FUN_ram_4804862a(auStack_8c,puVar11,uVar3);
  iVar4 = iStack_78;
  cVar9 = param_2[8];
  uVar12 = param_1[0x95];
  uVar5 = FUN_ram_4ff2d260();
  uVar5 = FUN_ram_480484fc(puVar11,param_1 + 0x96,cVar9,uVar3,uVar12,uVar5);
  if (((param_2[8] != '\0') && (param_2[0x10] == '\0')) &&
     (FUN_ram_4804862a(auStack_8c,puVar11,uVar3), iStack_78 != iVar4)) {
    FUN_ram_4805c6b0(*param_1,3,1,0);
  }
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0x99] = 8;
  param_1[0x9e] = 0x10000;
  if ((char)uVar5 == '\0') {
    cVar9 = *(char *)(param_1 + 0xad);
    if (*(char *)((int)param_1 + 0x2b5) == '\0') goto LAB_ram_480cb6b0;
    if (((*(char *)(param_1 + 0xa1) != '\0') || (*(char *)((int)param_1 + 0x215) != '\0')) ||
       (*(undefined1 *)((int)param_1 + 0x2b5) = 0, cVar9 == '\0')) goto LAB_ram_480cb6f0;
  }
  else {
    iVar4 = param_1[0x1c6] + 1;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    param_1[0x1c6] = iVar4;
    *(char *)((int)param_1 + 0x28b) = (char)uVar5;
    *(char *)(param_1 + 0xa3) = (char)((uint)uVar5 >> 8);
    *(char *)((int)param_1 + 0x28d) = (char)((uint)uVar5 >> 0x10);
    *(char *)((int)param_1 + 0x28e) = (char)((uint)uVar5 >> 0x18);
    *(undefined1 *)((int)param_1 + 0x28f) = extraout_a1;
    *(undefined1 *)(param_1 + 0xa1) = 1;
    if (*(char *)((int)param_1 + 0x2b5) != '\0') goto LAB_ram_480cb6f0;
    cVar9 = *(char *)(param_1 + 0xad);
LAB_ram_480cb6b0:
    if ((cVar9 == '\0') || (*(char *)(param_1 + 0xa1) != '\0')) goto LAB_ram_480cb6f0;
  }
  if (*(char *)((int)param_1 + 0x285) == '\0') {
    puVar8 = (uint *)param_1[3];
    *(undefined1 *)(param_1 + 0xad) = 0;
    fence();
    uVar7 = *puVar8;
    do {
      uVar6 = uVar7 - 1;
      if (((int)uVar7 < 0) || ((uVar7 & 0xffff) == 0)) goto LAB_ram_480cb6f0;
      bVar1 = *puVar8 != uVar7;
      uVar7 = *puVar8;
    } while (bVar1);
    *puVar8 = uVar6;
  }
LAB_ram_480cb6f0:
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


