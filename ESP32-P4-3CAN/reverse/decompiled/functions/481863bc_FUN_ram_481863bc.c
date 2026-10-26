/* Firmware entry: 0x481863bc */

undefined4
FUN_ram_481863bc(uint param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,int param_5,
                int param_6,uint *param_7,size_t *param_8,int *param_9,int *param_10,char param_11)

{
  int iVar1;
  size_t __n;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  size_t sVar10;
  uint __n_00;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  size_t sVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  void *pvStack_5c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    iVar1 = 0;
    __n = 0;
    __n_00 = 0;
    puVar2 = (uint *)0x0;
    pvVar5 = (void *)0x0;
    pvStack_5c = (void *)0x0;
LAB_ram_4818671c:
    if (param_7 != (uint *)0x0) {
      *param_7 = __n_00;
    }
    if (param_8 != (size_t *)0x0) {
      *param_8 = __n;
    }
    if (param_10 != (int *)0x0) {
      *param_10 = iVar1;
    }
    uVar6 = 0;
    *param_9 = (int)puVar2;
    *param_3 = pvStack_5c;
    *param_4 = pvVar5;
  }
  else {
    uVar9 = param_2 + 0xf & 0xfffffff0;
    uVar18 = param_1 & param_6 - 1U;
    uVar17 = -param_6;
    if (uVar18 == 0) {
      uVar12 = 0;
      __n_00 = 0;
      uVar18 = uVar9;
      uVar19 = param_2;
LAB_ram_4818640c:
      uVar19 = uVar19 & uVar17;
      __n = uVar18 - uVar19;
      uVar12 = (__n != 0) + uVar12;
      iVar13 = uVar19 - 1;
      sVar10 = __n;
      iVar1 = iVar13;
      uVar18 = uVar19;
      if (param_11 == '\0') goto LAB_ram_4818664c;
LAB_ram_48186424:
      uVar15 = 0xff0;
      __n = sVar10;
      iVar13 = iVar1;
      uVar19 = uVar18;
    }
    else {
      __n_00 = param_6 - uVar18;
      if (__n_00 < param_2) {
        uVar19 = (uVar18 - param_6) + param_2;
        uVar18 = (uVar18 - param_6) + uVar9;
        uVar12 = (uint)(__n_00 != 0);
        goto LAB_ram_4818640c;
      }
      uVar12 = (uint)(uVar9 != 0);
      iVar1 = -1;
      iVar13 = -1;
      sVar10 = 0;
      __n = 0;
      uVar18 = 0;
      uVar19 = 0;
      __n_00 = uVar9;
      if (param_11 != '\0') goto LAB_ram_48186424;
LAB_ram_4818664c:
      uVar15 = 0xffc;
    }
    uVar15 = uVar17 & uVar15;
    uVar18 = (iVar13 + uVar15) / uVar15;
    iVar1 = uVar12 + uVar18;
    puVar2 = (uint *)FUN_ram_48002128(8,iVar1,0x10,0x808);
    if (puVar2 == (uint *)0x0) {
      uVar6 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-aes",
                       "E (%lu) %s: Failed to allocate memory for the array of DMA descriptors\n",
                       uVar6,"esp-aes");
    }
    else {
      pvStack_5c = (void *)0x0;
      iVar13 = 0;
      if (__n_00 != 0) {
        iVar13 = thunk_FUN_ram_4ff21be8(param_1);
        pvStack_5c = (void *)FUN_ram_48002128(8,param_5,1,(uint)(iVar13 == 0) * 0x400 + 0x40c);
        if (pvStack_5c == (void *)0x0) {
          uVar6 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"esp-aes",
                           "E (%lu) %s: Failed to allocate memory for start alignment buffer\n",
                           uVar6,"esp-aes");
          goto LAB_ram_48186618;
        }
        memset(pvStack_5c,0,__n_00);
        uVar12 = param_2;
        if (__n_00 < param_2) {
          uVar12 = __n_00;
        }
        FUN_ram_4ff45158(pvStack_5c,param_1,uVar12);
        memset((void *)((int)pvStack_5c + __n_00),0,param_5 - __n_00);
        pvVar5 = pvStack_5c;
        puVar11 = puVar2;
        uVar12 = __n_00;
        do {
          uVar3 = uVar12;
          if ((int)uVar15 < (int)uVar12) {
            uVar3 = uVar15;
          }
          puVar11[1] = (uint)pvVar5;
          *puVar11 = *puVar11 & 0xff000000 | uVar3 & 0xfff | (uVar3 & 0xfff) << 0xc | 0x80000000;
          uVar12 = uVar12 - uVar3;
          pvVar5 = (void *)((int)pvVar5 + uVar3);
          puVar11 = puVar11 + 4;
        } while (uVar12 != 0);
        iVar13 = 1;
      }
      if (uVar19 != 0) {
        puVar11 = puVar2 + iVar13 * 4;
        uVar3 = param_1 + __n_00;
        uVar12 = uVar19;
        do {
          uVar7 = uVar12;
          if ((int)uVar15 < (int)uVar12) {
            uVar7 = uVar15;
          }
          puVar11[1] = uVar3;
          *puVar11 = *puVar11 & 0xff000000 | uVar7 & 0xfff | (uVar7 & 0xfff) << 0xc | 0x80000000;
          uVar12 = uVar12 - uVar7;
          uVar3 = uVar3 + uVar7;
          puVar11 = puVar11 + 4;
        } while (uVar12 != 0);
        iVar13 = iVar13 + uVar18;
      }
      if (__n == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        iVar4 = thunk_FUN_ram_4ff21be8(param_1);
        pvVar5 = (void *)FUN_ram_48002128(8,param_5,1,(uint)(iVar4 == 0) * 0x400 + 0x40c);
        if (pvVar5 == (void *)0x0) {
          uVar6 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"esp-aes",
                           "E (%lu) %s: Failed to allocate memory for end alignment buffer\n",uVar6,
                           "esp-aes");
          if (pvStack_5c != (void *)0x0) {
            FUN_ram_48178af2(pvStack_5c,param_5);
            thunk_FUN_ram_4ff209c6(pvStack_5c);
          }
          goto LAB_ram_48186618;
        }
        memset(pvVar5,0,__n);
        FUN_ram_4ff45158(pvVar5,__n_00 + uVar19 + param_1,(param_2 - uVar9) + __n);
        memset((void *)((int)pvVar5 + __n),0,param_5 - __n);
        puVar11 = puVar2 + iVar13 * 4;
        pvVar8 = pvVar5;
        sVar10 = __n;
        do {
          sVar16 = sVar10;
          if ((int)uVar15 < (int)sVar10) {
            sVar16 = uVar15;
          }
          puVar11[1] = (uint)pvVar8;
          *puVar11 = *puVar11 & 0xff000000 | sVar16 & 0xfff | (sVar16 & 0xfff) << 0xc | 0x80000000;
          sVar10 = sVar10 - sVar16;
          pvVar8 = (void *)((int)pvVar8 + sVar16);
          puVar11 = puVar11 + 4;
        } while (sVar10 != 0);
      }
      iVar13 = 0;
      puVar11 = puVar2;
      if (iVar1 != 0) {
        do {
          *puVar11 = *puVar11 & 0xbfffffff | (uint)(iVar13 == iVar1 + -1) << 0x1e;
          puVar14 = (uint *)0x0;
          if (iVar13 != iVar1 + -1) {
            puVar14 = puVar11 + 4;
          }
          puVar11[2] = (uint)puVar14;
          iVar4 = FUN_ram_4ff33956(puVar11[1],(*puVar11 >> 0xc & 0xfff) + (param_6 - 1U) & uVar17,4)
          ;
          iVar13 = iVar13 + 1;
          if (iVar4 != 0) goto LAB_ram_481865c0;
          puVar11 = puVar11 + 4;
        } while (iVar13 != iVar1);
      }
      iVar13 = FUN_ram_4ff33956(puVar2,iVar1 * 0x10,6);
      if (iVar13 == 0) goto LAB_ram_4818671c;
LAB_ram_481865c0:
      uVar6 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: DMA descriptors cache sync C2M failed\n",uVar6,
                       "esp-aes");
      if (pvStack_5c != (void *)0x0) {
        FUN_ram_48178af2(pvStack_5c,param_5);
        thunk_FUN_ram_4ff209c6(pvStack_5c);
      }
      if (pvVar5 != (void *)0x0) {
        FUN_ram_48178af2(pvVar5,param_5);
        thunk_FUN_ram_4ff209c6(pvVar5);
      }
    }
LAB_ram_48186618:
    thunk_FUN_ram_4ff209c6(puVar2);
    uVar6 = 0xffffffff;
  }
  return uVar6;
}


