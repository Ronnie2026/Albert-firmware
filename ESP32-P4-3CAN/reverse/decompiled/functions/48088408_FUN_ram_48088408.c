/* Firmware entry: 0x48088408 */

int FUN_ram_48088408(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char ****__nptr;
  ulong uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_60 [2];
  uint uStack_58;
  byte bStack_51;
  char *apcStack_50 [4];
  char ***apppcStack_40 [2];
  int iStack_38;
  byte bStack_31;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  iVar1 = DAT_ram_4ff6ded8;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  iVar6 = *(int *)(iVar1 + 0x40) * 0x1d40;
  iVar1 = *(int *)(iVar1 + 0x4c);
  iVar5 = iVar1 + iVar6;
  if (*(int *)(iVar5 + 0x1cc4) != 0) {
    puVar2 = (undefined4 *)(iVar1 + iVar6 + 0xcc4);
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      iVar6 = FUN_ram_4802b18e(param_1,*puVar2);
      iVar1 = DAT_ram_4ff6ded8;
      if (iVar6 != 0) {
        iVar5 = FUN_ram_4802b18e(param_1,"plain");
        if ((iVar5 == 0) ||
           (iVar5 = *(int *)(iVar1 + 0x4c) + *(int *)(iVar1 + 0x40) * 0x1d40,
           *(char *)(iVar5 + 0xcc2) == '\0')) {
          iVar8 = *(int *)(iVar1 + 0x40);
          iVar5 = iVar8 * 0x1d40;
          iVar9 = *(int *)(iVar1 + 0x4c);
          iVar1 = iVar9 + iVar5;
          if (*(int *)(iVar1 + 0x1cc4) == 0) goto LAB_ram_48088662;
          puVar2 = (undefined4 *)(iVar5 + 0xcc4 + iVar9);
          uVar7 = 0;
          goto LAB_ram_48088514;
        }
        puVar4 = *(undefined1 **)(iVar5 + 0x43c);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_ram_481df390;
        }
        FUN_ram_4802a888(local_60,puVar4,*(undefined4 *)(iVar5 + 0x438));
        goto LAB_ram_48088544;
      }
      puVar2 = puVar2 + 2;
    } while (uVar7 < *(uint *)(iVar5 + 0x1cc4));
  }
  return 1;
  while( true ) {
    uVar7 = uVar7 + 1;
    puVar2 = puVar2 + 2;
    if (*(uint *)(iVar1 + 0x1cc4) <= uVar7) break;
LAB_ram_48088514:
    iVar5 = FUN_ram_4802b18e(param_1,*puVar2);
    if (iVar5 != 0) {
      FUN_ram_4802a8a8(local_60,*(undefined4 *)(iVar9 + (iVar8 * 0x3a8 + uVar7) * 8 + 0xcc8));
      goto LAB_ram_48088544;
    }
  }
LAB_ram_48088662:
  FUN_ram_4802a8a8(local_60,&DAT_ram_481df390);
LAB_ram_48088544:
  FUN_ram_4802a8a8(apppcStack_40,&DAT_ram_481cbeec);
  FUN_ram_4802a8a8(apcStack_50,&DAT_ram_481df390);
  FUN_ram_4802b3f8(local_60,apppcStack_40,apcStack_50);
  FUN_ram_4802a59e(apcStack_50);
  FUN_ram_4802a59e(apppcStack_40);
  FUN_ram_4802a8a8(apppcStack_40,&DAT_ram_481caf88);
  FUN_ram_4802a8a8(apcStack_50,&DAT_ram_481df390);
  FUN_ram_4802b3f8(local_60,apppcStack_40,apcStack_50);
  FUN_ram_4802a59e(apcStack_50);
  FUN_ram_4802a59e(apppcStack_40);
  if ((char)bStack_51 < '\0') {
    uStack_58 = bStack_51 & 0x7f;
LAB_ram_480885ae:
    if (uStack_58 == 0x10) {
      iVar1 = 0;
      do {
        iVar5 = iVar1 + 2;
        FUN_ram_4802b356(apppcStack_40,local_60,iVar1,iVar5);
        if (-1 < (char)bStack_31) {
          if (((char ****)apppcStack_40[0] != (char ****)0x0) &&
             (__nptr = (char ****)apppcStack_40[0], iStack_38 != 0)) goto LAB_ram_480885c4;
LAB_ram_48088616:
          FUN_ram_4802a59e(apppcStack_40);
          goto LAB_ram_4808861c;
        }
        __nptr = apppcStack_40;
        if ((bStack_31 & 0x7f) == 0) goto LAB_ram_48088616;
LAB_ram_480885c4:
        apcStack_50[0] = (char *)0x0;
        uVar3 = strtoul((char *)__nptr,apcStack_50,0x10);
        if (((apcStack_50[0] == (char *)0x0) || (*apcStack_50[0] != '\0')) || (0xff < uVar3))
        goto LAB_ram_48088616;
        *param_2 = (char)uVar3;
        FUN_ram_4802a59e(apppcStack_40);
        param_2 = param_2 + 1;
        iVar1 = iVar5;
      } while (iVar5 != 0x10);
      goto LAB_ram_4808861e;
    }
  }
  else if (local_60[0] != 0) goto LAB_ram_480885ae;
LAB_ram_4808861c:
  iVar6 = 0;
LAB_ram_4808861e:
  FUN_ram_4802a59e(local_60);
  return iVar6;
}


