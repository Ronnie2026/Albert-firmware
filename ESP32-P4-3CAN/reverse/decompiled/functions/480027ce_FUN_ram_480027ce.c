/* Firmware entry: 0x480027ce */

/* WARNING: Removing unreachable block (ram,0x48002a3c) */
/* WARNING: Removing unreachable block (ram,0x48002a42) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_480027ce(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  uint auStack_90 [2];
  undefined1 auStack_88 [56];
  int aiStack_50 [4];
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar15 = DAT_ram_481e42a4 * 0x14;
  iVar2 = -(iVar15 + 0xfU & 0xfffffff0);
  piVar14 = (int *)((int)aiStack_50 + iVar2);
  FUN_ram_4ff45158((int)aiStack_50 + iVar2,&DAT_ram_481e42a8,iVar15);
  puVar13 = (uint *)((int)auStack_90 + iVar2);
  *(undefined4 *)((int)auStack_90 + iVar2) = *(undefined4 *)(_DAT_ram_4fc1fffc + 4);
  *(undefined4 *)((int)auStack_90 + iVar2 + 4) = 0x4ffc0000;
  FUN_ram_4ff45158(auStack_88 + iVar2,&DAT_ram_4823c210);
  qsort((void *)((int)auStack_90 + iVar2),7,8,FUN_ram_480027a4);
  uVar7 = 0;
  do {
    uVar11 = puVar13[1] + 3 & 0xfffffffc;
    uVar9 = *puVar13 & 0xfffffffc;
    puVar13[1] = uVar11;
    *puVar13 = uVar9;
    if ((int)uVar11 < (int)uVar9) {
LAB_ram_480028c4:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("memory_layout_utils.c",0x56,"s_prepare_reserved_regions",
                       "reserved[i].start <= reserved[i].end");
    }
    while (uVar7 < 6) {
      if ((int)puVar13[2] <= (int)uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("memory_layout_utils.c",0x58,"s_prepare_reserved_regions",
                         "reserved[i + 1].start > reserved[i].start");
      }
      if ((int)puVar13[2] < (int)uVar11) {
        if (DAT_ram_4ff47dac != 0) {
          uVar4 = FUN_ram_4ff44d14();
          ets_printf("E (%lu) %s: SOC_RESERVE_MEMORY_REGION region range 0x%08x - 0x%08x overlaps with 0x%08x - 0x%08x\n"
                     ,uVar4,"memory_layout",*puVar13,puVar13[1],puVar13[2],puVar13[3]);
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e06();
      }
      uVar11 = puVar13[3] + 3 & 0xfffffffc;
      uVar9 = puVar13[2] & 0xfffffffc;
      puVar13[3] = uVar11;
      puVar13[2] = uVar9;
      uVar7 = uVar7 + 1;
      puVar13 = puVar13 + 2;
      if ((int)uVar11 < (int)uVar9) goto LAB_ram_480028c4;
    }
    puVar13 = puVar13 + 2;
    bVar1 = uVar7 != 6;
    uVar7 = uVar7 + 1;
  } while (bVar1);
  piVar16 = param_1;
  if (iVar15 == 0) {
    return 0;
  }
LAB_ram_48002926:
  aiStack_50[3] = *piVar14;
  local_40 = piVar14[1];
  local_3c = piVar14[2];
  local_38 = piVar14[3];
  local_34 = piVar14[4];
  iVar3 = aiStack_50[3] + local_40;
  iVar8 = 0;
  iVar5 = aiStack_50[3];
  piVar12 = (int *)((int)auStack_90 + iVar2);
  uVar7 = local_40;
  do {
    iVar10 = piVar12[1];
    if (iVar5 < iVar10) {
      iVar6 = *piVar12;
      if (iVar3 <= iVar6) break;
      if (iVar5 < iVar6) {
        uVar7 = iVar6 - iVar5;
        bVar1 = iVar10 < iVar3;
        iVar3 = iVar6;
        if (bVar1) {
          piVar14[1] = local_40 - (iVar10 - aiStack_50[3]);
          *piVar14 = iVar10;
          if (0x10 < (int)uVar7) {
            *piVar16 = iVar5;
            piVar16[1] = uVar7;
            piVar16[2] = local_3c;
            piVar16[3] = local_38;
            piVar16[4] = local_34;
            aiStack_50[3] = iVar5;
            local_40 = uVar7;
            piVar16 = piVar16 + 5;
          }
          goto LAB_ram_480029c8;
        }
      }
      else {
        if (iVar3 <= iVar10) goto LAB_ram_480029c6;
        uVar7 = iVar3 - iVar10;
        iVar5 = iVar10;
      }
    }
    if (iVar8 == 6) break;
    piVar12 = piVar12 + 2;
    iVar8 = iVar8 + 1;
  } while( true );
  if (0x10 < uVar7) {
    *piVar16 = iVar5;
    piVar16[1] = uVar7;
    piVar16[2] = local_3c;
    piVar16[3] = local_38;
    piVar16[4] = local_34;
    aiStack_50[3] = iVar5;
    local_40 = uVar7;
    piVar16 = piVar16 + 5;
  }
LAB_ram_480029c6:
  piVar14 = piVar14 + 5;
LAB_ram_480029c8:
  if (piVar14 == (int *)((int)aiStack_50 + iVar15 + iVar2)) {
    return ((int)piVar16 - (int)param_1 >> 2) * -0x33333333;
  }
  goto LAB_ram_48002926;
}


