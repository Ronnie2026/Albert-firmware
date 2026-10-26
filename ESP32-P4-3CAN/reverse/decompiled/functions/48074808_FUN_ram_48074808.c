/* Firmware entry: 0x48074808 */

/* WARNING: Removing unreachable block (ram,0x480749e8) */
/* WARNING: Removing unreachable block (ram,0x48074bfc) */
/* WARNING: Removing unreachable block (ram,0x48074bd6) */
/* WARNING: Removing unreachable block (ram,0x48074a84) */

bool FUN_ram_48074808(int param_1,char *param_2,void *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  size_t sStack_58;
  char *pcStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_1 + 0xe7c) = 0;
  memset(param_3,0,0x9c);
  *(undefined1 *)(param_1 + 0xe34) = 0;
  *(undefined1 *)(param_1 + 0xe78) = 0;
  iVar11 = *(int *)(param_1 + 0x2ecc);
  iVar2 = FUN_ram_48025ba6();
  pcVar10 = (char *)(param_1 + 0x3ff9);
  fence();
  if (*pcVar10 != '\0') {
    return false;
  }
  iVar11 = iVar11 - iVar2;
  if (iVar11 < 1) {
    return false;
  }
  sStack_58 = strlen(param_2);
  iVar7 = param_1 + 0x530;
  pcStack_54 = param_2;
  iVar2 = FUN_ram_480744c8(sStack_58,param_2,iVar7);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = FUN_ram_4ff453ae(iVar7,"tesla.srlt.cc");
  if (iVar2 != 0) {
    return false;
  }
  if (*(short *)(param_1 + 0xe32) != 0x1bb) {
    return false;
  }
  uVar13 = FUN_ram_4ff21a0a();
  uVar14 = FUN_ram_4ff21a0a();
  uVar15 = __divdi3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),1000,0);
  iVar2 = DAT_ram_4ff6dcc8;
  iVar5 = (int)(uVar15 >> 0x20);
  iVar3 = (int)uVar15;
  sStack_58 = 0;
  pcStack_54 = (char *)0x0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  iVar4 = FUN_ram_48139330(iVar7,&sStack_58);
  if (iVar4 != 0) {
    iVar11 = FUN_ram_4813931a(&sStack_58,iVar2 + 0x1fa0,0x2e);
    goto LAB_ram_48074a66;
  }
  piVar8 = (int *)(iVar2 + 0x1910);
  do {
    if (*piVar8 == 0) {
      *piVar8 = 1;
      FUN_ram_4819ad74(piVar8 + 1,0x181,&DAT_ram_481cd004,iVar7);
      *(undefined1 *)(piVar8 + 0x68) = 0;
      iVar4 = FUN_ram_48137856(FUN_ram_48032586,piVar8);
      if (iVar4 != 0) {
        iVar11 = *piVar8;
        *piVar8 = 3;
        if (iVar11 == 2) {
          fence();
          *piVar8 = 0;
        }
        goto LAB_ram_48074c18;
      }
      lVar16 = __divdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
      if (10000 < iVar11) {
        iVar11 = 10000;
      }
      goto LAB_ram_4807499c;
    }
    piVar8 = piVar8 + 0x69;
  } while (piVar8 != (int *)(iVar2 + 0x1fa0));
LAB_ram_480749ca:
  uVar13 = FUN_ram_4ff21a0a();
  uVar17 = __divdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
  if (uVar15 <= uVar17) {
    uVar9 = (uint)uVar17 - iVar3;
    if ((int)(uVar17 >> 0x20) - iVar5 != (uint)((uint)uVar17 < uVar9)) {
      uVar9 = 0xffffffff;
    }
    *(uint *)(param_1 + 0xe7c) = uVar9;
    return false;
  }
LAB_ram_48074b96:
  *(undefined4 *)(param_1 + 0xe7c) = 0;
  return false;
LAB_ram_4807499c:
  fence();
  if (*piVar8 == 3) goto LAB_ram_48074ba4;
  fence();
  if ((*pcVar10 != '\0') ||
     (iVar12 = *(int *)(param_1 + 0x2ecc), iVar4 = FUN_ram_48025ba6(), iVar12 - iVar4 < 1)) {
LAB_ram_480749b2:
    if (*piVar8 == 1) {
      *piVar8 = 2;
    }
    else {
LAB_ram_48074c18:
      if (*piVar8 == 3) {
        *piVar8 = 0;
      }
    }
    goto LAB_ram_480749ca;
  }
  uVar13 = FUN_ram_4ff21a0a();
  uVar17 = __divdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
  if ((ulonglong)(lVar16 + iVar11) <= uVar17) goto LAB_ram_480749b2;
  FUN_ram_4ff3c2b6(10);
  goto LAB_ram_4807499c;
LAB_ram_48074ba4:
  if ((char)piVar8[0x68] != '\0') {
    iVar11 = FUN_ram_4813931a(piVar8 + 0x62,iVar2 + 0x1fa0,0x2e);
    if (*piVar8 == 3) {
      *piVar8 = 0;
    }
LAB_ram_48074a66:
    uVar13 = FUN_ram_4ff21a0a();
    uVar17 = __divdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
    if (uVar17 < uVar15) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)uVar17 - iVar3;
      if ((int)(uVar17 >> 0x20) - iVar5 != (uint)((uint)uVar17 < uVar9)) {
        uVar9 = 0xffffffff;
      }
    }
    *(uint *)(param_1 + 0xe7c) = uVar9;
    if (iVar11 == 0) {
      return false;
    }
    fence();
    if (*pcVar10 != '\0') {
      return false;
    }
    iVar2 = *(int *)(param_1 + 0x2ecc);
    iVar11 = FUN_ram_48025ba6();
    if (iVar2 - iVar11 < 1) {
      return false;
    }
    iVar11 = FUN_ram_4819ad74(param_1 + 0xe34,0x30,&DAT_ram_481cd004,DAT_ram_4ff6dcc8 + 0x1fa0);
    if (0x2e < iVar11 - 1U) {
      return false;
    }
    *(undefined1 *)(param_1 + 0xe78) = 1;
    *(int *)((int)param_3 + 0x18) = param_1 + 0x832;
    *(int *)((int)param_3 + 4) = param_1 + 0xe34;
    iVar11 = 0;
    if (*(char *)(param_1 + 0xb32) != '\0') {
      iVar11 = param_1 + 0xb32;
    }
    uVar1 = *(ushort *)(param_1 + 0xe32);
    iVar2 = *(int *)(param_1 + 0x2ecc);
    *(int *)((int)param_3 + 0x1c) = iVar11;
    *(uint *)((int)param_3 + 8) = (uint)uVar1;
    *(undefined4 *)((int)param_3 + 0x48) = 0;
    *(undefined4 *)((int)param_3 + 0x60) = 2;
    iVar11 = FUN_ram_48025ba6();
    uVar9 = iVar2 - iVar11;
    uVar6 = 10000;
    if ((int)uVar9 < 0x2711) {
      uVar6 = (int)~uVar9 >> 0x1f & uVar9;
    }
    *(int *)((int)param_3 + 0x74) = iVar7;
    *(uint *)((int)param_3 + 0x4c) = uVar6;
    *(undefined1 *)((int)param_3 + 0x70) = 0;
    *(code **)((int)param_3 + 0x78) = FUN_ram_4812cd16;
    *(undefined1 *)((int)param_3 + 0x50) = 1;
    *(undefined4 *)((int)param_3 + 0x58) = 0xffffffff;
    *(undefined4 *)((int)param_3 + 100) = 0x400;
    *(undefined4 *)((int)param_3 + 0x68) = 0x200;
    return 0 < (int)uVar9;
  }
  if (*piVar8 == 3) {
    *piVar8 = 0;
  }
  uVar13 = FUN_ram_4ff21a0a();
  uVar17 = __divdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
  if (uVar15 <= uVar17) {
    uVar9 = (uint)uVar17 - iVar3;
    if ((int)(uVar17 >> 0x20) - iVar5 != (uint)((uint)uVar17 < uVar9)) {
      uVar9 = 0xffffffff;
    }
    *(uint *)(param_1 + 0xe7c) = uVar9;
    return false;
  }
  goto LAB_ram_48074b96;
}


