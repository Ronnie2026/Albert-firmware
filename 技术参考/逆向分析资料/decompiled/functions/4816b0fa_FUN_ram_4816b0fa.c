/* Firmware entry: 0x4816b0fa */

int FUN_ram_4816b0fa(int *param_1)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  char *pcVar9;
  code *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  uint uStack_154;
  undefined4 uStack_144;
  char acStack_140 [32];
  undefined1 auStack_120 [236];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar2 = (char *)param_1[0x10];
  if (*(char *)(*(int *)(pcVar2 + 0x10) + 9) == '\n') {
    pcVar8 = FUN_ram_4816a11e;
    pcVar10 = (code *)&LAB_ram_4816a324;
    puVar12 = &LAB_ram_4816a25c;
  }
  else {
    pcVar8 = FUN_ram_4816a0ca;
    pcVar10 = FUN_ram_4816a32e;
    puVar12 = &LAB_ram_4816a23e;
  }
  uStack_144 = 0x40;
  *(code **)(pcVar2 + 0x20) = pcVar8;
  *(code **)(pcVar2 + 0x18) = pcVar10;
  *(undefined1 **)(pcVar2 + 0x1c) = puVar12;
  iVar15 = param_1[0xf];
  if (*pcVar2 == '\0') {
    if (pcVar2[0xc] == '\x01') {
      (*pcVar10)(param_1,acStack_140,&uStack_144);
      pcVar11 = acStack_140;
      pcVar9 = "extended master secret";
    }
    else {
      pcVar9 = "master secret";
      pcVar11 = pcVar2 + 0x1b4;
    }
    iVar15 = (**(code **)(pcVar2 + 0x20))
                       (pcVar2 + 500,*(undefined4 *)(pcVar2 + 0x238),pcVar9,pcVar11,uStack_144,
                        iVar15 + 0x38,0x30,*(code **)(pcVar2 + 0x20));
    if (iVar15 != 0) {
      return iVar15;
    }
    FUN_ram_48178af2(pcVar2 + 500,0x42);
    pcVar2 = (char *)param_1[0x10];
  }
  FUN_ram_4ff45158(acStack_140,pcVar2 + 0x1b4,0x40);
  FUN_ram_4ff45158(pcVar2 + 0x1b4,auStack_120,0x20);
  FUN_ram_4ff45158(param_1[0x10] + 0x1d4,acStack_140,0x20);
  FUN_ram_48178af2(acStack_140,0x40);
  iVar16 = param_1[0xf];
  iVar19 = param_1[0x10];
  uVar18 = *(uint *)(iVar16 + 0x88);
  puVar3 = (uint *)param_1[0x14];
  uVar22 = param_1[4];
  uVar4 = *(undefined4 *)(iVar16 + 0x10);
  pcVar8 = *(code **)(iVar19 + 0x20);
  cVar1 = *(char *)(*param_1 + 8);
  puVar3[0x13] = uVar18;
  puVar3[0x14] = uVar22;
  iVar15 = FUN_ram_4816f1ea(uVar4);
  if (iVar15 == 0) {
    return -0x7100;
  }
  iVar5 = FUN_ram_4816a4b0(uVar18,iVar15);
  if (iVar5 == 3) {
    puVar3[4] = (uint)((*(byte *)(iVar15 + 0xb) & 2) == 0) * 8 + 8;
  }
  iVar6 = FUN_ram_4817189a(*(undefined1 *)(iVar15 + 8));
  if (iVar6 == 0) {
    return -0x7100;
  }
  iVar15 = FUN_ram_4817697e(*(undefined1 *)(iVar15 + 9));
  if (iVar15 == 0) {
    return -0x7100;
  }
  iVar7 = (*pcVar8)(iVar16 + 0x38,0x30,"key expansion",iVar19 + 0x1b4,0x40,acStack_140,0x100);
  if (iVar7 != 0) {
    return iVar7;
  }
  uVar13 = *(uint *)(iVar6 + 4);
  uVar18 = uVar13 >> 5 & 0x78;
  if (iVar5 == 3) {
    puVar3[3] = 0;
    puVar3[1] = 0xc;
    uVar21 = 4;
    if ((uVar13 >> 0xc & 0xf) == 0xb) {
      uVar21 = 0xc;
    }
    puVar3[2] = uVar21;
    *puVar3 = (puVar3[4] + 0xc) - uVar21;
    if (cVar1 == '\0') {
      pcVar9 = acStack_140;
      uStack_154 = 0;
      pcVar11 = pcVar9 + uVar18;
      pcVar2 = pcVar9;
      goto LAB_ram_4816b3ec;
    }
    if (cVar1 != '\x01') {
LAB_ram_4816b2ca:
      FUN_ram_48178af2(acStack_140,0x100);
      return -0x6c00;
    }
    pcVar11 = acStack_140;
    uStack_154 = 0;
    pcVar2 = pcVar11 + uVar18;
    pcVar23 = pcVar11;
LAB_ram_4816b4f0:
    FUN_ram_4ff45158(puVar3 + 9,pcVar2 + uVar18,uVar21);
    FUN_ram_4ff45158(puVar3 + 5,pcVar2 + uVar18 + uVar21,uVar21);
    pcVar9 = acStack_140;
  }
  else {
    iVar7 = FUN_ram_48176b18(puVar3 + 0xd,iVar15,1);
    if ((iVar7 != 0) || (iVar7 = FUN_ram_48176b18(puVar3 + 0x10,iVar15,1), iVar7 != 0))
    goto LAB_ram_4816b386;
    uStack_154 = FUN_ram_48176d4c(iVar15);
    uVar14 = *(uint *)(iVar6 + 4);
    puVar3[3] = uStack_154;
    uVar21 = uVar14 >> 3 & 0x1c;
    puVar3[1] = uVar21;
    uVar14 = uStack_154;
    if (iVar5 != 0) {
      uVar14 = (uVar13 & 0x1f) + uStack_154;
      if (iVar5 != 2) {
        uVar14 = uVar14 - uStack_154 % (uVar13 & 0x1f);
      }
      *puVar3 = uVar14;
      if (uVar22 != 0x303) goto LAB_ram_4816b2ca;
      uVar14 = uVar14 + uVar21;
    }
    *puVar3 = uVar14;
    if (cVar1 != '\0') {
      if (cVar1 != '\x01') goto LAB_ram_4816b2ca;
      uVar21 = puVar3[2];
      pcVar23 = acStack_140 + uStack_154;
      pcVar2 = acStack_140 + uVar18 + uStack_154 * 2;
      pcVar11 = acStack_140 + uStack_154 * 2;
      if (uVar21 == 0) {
        uVar21 = puVar3[1];
      }
      goto LAB_ram_4816b4f0;
    }
    pcVar9 = acStack_140 + uStack_154;
    pcVar11 = acStack_140 + uVar18 + uStack_154 * 2;
    pcVar2 = acStack_140 + uStack_154 * 2;
    if (puVar3[2] != 0) {
      uVar21 = puVar3[2];
    }
LAB_ram_4816b3ec:
    FUN_ram_4ff45158(puVar3 + 5,pcVar11 + uVar18,uVar21);
    FUN_ram_4ff45158(puVar3 + 9,pcVar11 + uVar18 + uVar21,uVar21);
    pcVar23 = acStack_140;
  }
  if ((code *)param_1[0x3c] != (code *)0x0) {
    if (pcVar8 == FUN_ram_4816a11e) {
      iVar15 = 1;
    }
    else {
      iVar15 = (uint)(pcVar8 == FUN_ram_4816a0ca) << 1;
    }
    (*(code *)param_1[0x3c])
              (param_1[0x3d],0,iVar16 + 0x38,0x30,iVar19 + 0x1d4,iVar19 + 0x1b4,iVar15);
  }
  puVar17 = puVar3 + 0x15;
  iVar7 = FUN_ram_48171962(puVar17,iVar6);
  if (iVar7 == 0) {
    puVar20 = puVar3 + 0x26;
    iVar7 = FUN_ram_48171962(puVar20,iVar6);
    if (((iVar7 == 0) &&
        (iVar7 = FUN_ram_481719ba(puVar17,pcVar2,*(uint *)(iVar6 + 4) >> 2 & 0x3c0,1), iVar7 == 0))
       && (iVar7 = FUN_ram_481719ba(puVar20,pcVar11,*(uint *)(iVar6 + 4) >> 2 & 0x3c0,0), iVar7 == 0
          )) {
      if (((*(uint *)(iVar6 + 4) >> 0xc & 0xf) == 2) &&
         ((iVar15 = FUN_ram_48171fce(puVar17,4), iVar15 != 0 ||
          (iVar15 = FUN_ram_48171fce(puVar20,4), iVar15 != 0)))) {
LAB_ram_4816b57c:
        FUN_ram_48178af2(acStack_140,0x100);
        return iVar15;
      }
      if (uStack_154 == 0) {
        FUN_ram_48178af2(acStack_140,0x100);
      }
      else {
        iVar15 = FUN_ram_48176d6c(puVar3 + 0xd,pcVar23,uStack_154);
        if (iVar15 != 0) goto LAB_ram_4816b57c;
        iVar15 = FUN_ram_48176d6c(puVar3 + 0x10,pcVar9,uStack_154);
        FUN_ram_48178af2(acStack_140,0x100);
        if (iVar15 != 0) {
          return iVar15;
        }
      }
      FUN_ram_48178af2(param_1[0x10] + 0x1b4,0x40);
      return 0;
    }
  }
LAB_ram_4816b386:
  FUN_ram_48178af2(acStack_140,0x100);
  return iVar7;
}


