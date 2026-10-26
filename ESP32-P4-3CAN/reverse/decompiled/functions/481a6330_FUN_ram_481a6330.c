/* Firmware entry: 0x481a6330 */

undefined4
FUN_ram_481a6330(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint *param_6)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  
  puVar1 = PTR_DAT_ram_481d4b48_ram_4ff52f94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_6 == (uint *)0x0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): null pointer\n",uVar4,
                     PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_map",0x1d3);
  }
  else if ((param_1 & 0xffff) == 0) {
    if (((param_4 & 1) == 0) || ((param_4 & 0x14) == 0)) {
      FUN_ram_4ff216d6(&DAT_ram_4ff6c438);
      puVar1 = PTR_DAT_ram_481d4b48_ram_4ff52f94;
      uVar15 = param_2 + 0xffffU & 0xffff0000;
      if (DAT_ram_4ff6c3e4 != 0) {
        puVar13 = &DAT_ram_4ff6c3fc;
        iVar3 = 0;
        do {
          if (((param_4 == (puVar13[1] & param_4)) && (param_3 == (param_3 & puVar13[2]))) &&
             (uVar15 <= *puVar13)) {
            iVar5 = (&DAT_ram_4ff6c408)[iVar3 * 10];
            if (iVar5 == 0) {
              puVar14 = (undefined4 *)FUN_ram_4ff2091a(1,0x2c,0x804);
              puVar1 = PTR_DAT_ram_481d4b48_ram_4ff52f94;
              if (puVar14 == (undefined4 *)0x0) {
                uVar4 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): no mem\n",uVar4,
                                 PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_map",0x1e7);
                uVar4 = 0x101;
                goto LAB_ram_481a643a;
              }
              uVar4 = (&DAT_ram_4ff6c3f8)[iVar3 * 10];
              iVar5 = (&DAT_ram_4ff6c408)[iVar3 * 10];
              puVar14[4] = 0;
              *puVar14 = uVar4;
              puVar14[1] = uVar4;
              puVar14[5] = param_4;
              puVar14[9] = iVar5;
              if (iVar5 == 0) {
                (&DAT_ram_4ff6c40c)[iVar3 * 10] = puVar14 + 9;
              }
              else {
                *(undefined4 **)(iVar5 + 0x28) = puVar14 + 9;
              }
              (&DAT_ram_4ff6c408)[iVar3 * 10] = puVar14;
              puVar14[10] = &DAT_ram_4ff6c408 + iVar3 * 10;
              puVar2 = (undefined4 *)FUN_ram_4ff2091a(1,0x2c,0x804);
              puVar1 = PTR_DAT_ram_481d4b48_ram_4ff52f94;
              if (puVar2 == (undefined4 *)0x0) {
                uVar4 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): no mem\n",uVar4,
                                 PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_map",0x1f1);
                uVar4 = 0x101;
                goto LAB_ram_481a642e;
              }
              piVar6 = (int *)(&DAT_ram_4ff6c40c)[iVar3 * 10];
              uVar4 = (&DAT_ram_4ff6c3f0)[iVar3 * 10];
              puVar2[4] = 0;
              puVar2[10] = piVar6;
              *puVar2 = uVar4;
              puVar2[1] = uVar4;
              puVar2[5] = param_4;
              puVar2[9] = 0;
              *piVar6 = (int)puVar2;
              iVar5 = (&DAT_ram_4ff6c408)[iVar3 * 10];
              (&DAT_ram_4ff6c40c)[iVar3 * 10] = puVar2 + 9;
              if (iVar5 == 0) goto LAB_ram_481a65ba;
            }
            else {
              puVar14 = (undefined4 *)0x0;
              puVar2 = (undefined4 *)0x0;
            }
            puVar1 = PTR_DAT_ram_481d4b48_ram_4ff52f94;
            uVar7 = uVar15 + param_1;
            goto LAB_ram_481a63f6;
          }
          iVar3 = iVar3 + 1;
          puVar13 = puVar13 + 10;
        } while (DAT_ram_4ff6c3e4 != iVar3);
      }
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): no such vaddr range\n",uVar4,
                       PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_map",0x1df);
      uVar4 = 0x105;
      goto LAB_ram_481a643a;
    }
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): invalid caps\n",uVar4,
                     PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_map",0x1d8);
  }
  else {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,puVar1,
                     "E (%lu) %s: %s(%d): paddr must be rounded up to the nearest multiple of CONFIG_MMU_PAGE_SIZE\n"
                     ,uVar4,PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_map",0x1d7);
  }
  return 0x102;
LAB_ram_481a63f6:
  do {
    if (*(uint *)(iVar5 + 0x20) == param_3) {
      uVar12 = *(uint *)(iVar5 + 0x18);
      uVar9 = *(uint *)(iVar5 + 0x1c);
      if (param_1 < uVar12) {
        if (((param_5 & 1) == 0) && ((uVar12 < uVar7 || ((param_1 < uVar9 && (uVar9 < uVar7)))))) {
LAB_ram_481a64da:
          uVar4 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,puVar1,
                           "E (%lu) %s: %s(%d): paddr block is overlapped with an already mapped paddr block\n"
                           ,uVar4,PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_map",0x222);
          uVar4 = 0x102;
          goto joined_r0x481a651c;
        }
      }
      else {
        if (uVar7 <= uVar9) {
          uVar4 = 0x103;
          *param_6 = (*(int *)(iVar5 + 8) - uVar12) + param_1;
          goto joined_r0x481a651c;
        }
        if (((param_5 & 1) == 0) && (param_1 < uVar9)) goto LAB_ram_481a64da;
      }
    }
    iVar5 = *(int *)(iVar5 + 0x24);
  } while (iVar5 != 0);
LAB_ram_481a65ba:
  puVar13 = (uint *)FUN_ram_4ff2091a(1,0x2c,0x804);
  puVar1 = PTR_DAT_ram_481d4b48_ram_4ff52f94;
  if (puVar13 != (uint *)0x0) {
    piVar6 = (int *)(&DAT_ram_4ff6c408)[iVar3 * 10];
    uVar10 = piVar6[1];
    uVar12 = *piVar6 - uVar10;
    uVar7 = 0;
    uVar9 = uVar10;
    while( true ) {
      uVar8 = uVar10;
      if (uVar15 <= uVar12) {
        *puVar13 = uVar9;
        uVar9 = uVar12 - uVar15;
        if (uVar12 - uVar15 < uVar7) {
          uVar9 = uVar7;
        }
        piVar11 = (int *)piVar6[9];
        if (piVar11 != (int *)0x0) {
          iVar5 = piVar11[1];
          uVar8 = *piVar11 - uVar8;
          while( true ) {
            if (uVar9 < uVar8) {
              uVar9 = uVar8;
            }
            piVar11 = (int *)piVar11[9];
            if (piVar11 == (int *)0x0) break;
            uVar8 = *piVar11 - iVar5;
            iVar5 = piVar11[1];
          }
        }
        puVar14 = (undefined4 *)piVar6[10];
        puVar13[9] = (uint)piVar6;
        puVar13[10] = (uint)puVar14;
        uVar12 = *puVar13;
        *puVar14 = puVar13;
        piVar6[10] = (int)(puVar13 + 9);
        (&DAT_ram_4ff6c3fc)[iVar3 * 10] = uVar9;
        uVar9 = uVar15 + uVar12;
        uVar7 = 0x48000000;
        if (param_3 == 1) {
          uVar7 = 0x40000000;
        }
        uVar12 = uVar12 | uVar7;
        puVar13[1] = uVar9;
        puVar13[4] = uVar15;
        puVar13[5] = param_4;
        puVar13[6] = param_1;
        puVar13[7] = uVar15 + param_1;
        puVar13[8] = param_3;
        puVar13[2] = uVar12;
        puVar13[3] = uVar7 | uVar9;
        FUN_ram_4ff2c25e(param_3,uVar12,param_1,uVar15);
        *param_6 = puVar13[2];
        FUN_ram_4ff216e2(&DAT_ram_4ff6c438);
        return 0;
      }
      if (uVar7 < uVar12) {
        uVar7 = uVar12;
      }
      piVar6 = (int *)piVar6[9];
      if (piVar6 == (int *)0x0) break;
      uVar12 = *piVar6 - uVar8;
      uVar10 = piVar6[1];
      uVar9 = uVar8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s___IDF_components_esp_mm_esp_mmu__ram_4ff56b44 + 0x18,0x242,"esp_mmu_map",
                     "found");
  }
  uVar4 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): no mem\n",uVar4,PTR_DAT_ram_481d4b48_ram_4ff52f94,
                   "esp_mmu_map",0x227);
  uVar4 = 0x101;
joined_r0x481a651c:
  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_ram_4ff209c6(puVar2);
  }
  if (puVar14 != (undefined4 *)0x0) {
LAB_ram_481a642e:
    thunk_FUN_ram_4ff209c6(puVar14);
  }
LAB_ram_481a643a:
  FUN_ram_4ff216e2(&DAT_ram_4ff6c438);
  return uVar4;
}


