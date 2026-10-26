/* Firmware entry: 0x48088252 */

int FUN_ram_48088252(undefined4 param_1,uint param_2,ulong *param_3,int param_4,int param_5,
                    ulong param_6)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcStack_44;
  char ******appppppcStack_40 [2];
  int iStack_38;
  byte bStack_31;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
  iVar5 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar6;
  if (*(int *)(iVar5 + 0x1cc4) != 0) {
    puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar6 + 0xcc4);
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      iVar2 = FUN_ram_4802b18e(param_1,*puVar1);
      iVar6 = DAT_ram_4ff6ded8;
      if (iVar2 != 0) {
        iVar5 = FUN_ram_4802b18e(param_1,"plain");
        if ((iVar5 == 0) ||
           (iVar5 = *(int *)(iVar6 + 0x4c) + *(int *)(iVar6 + 0x40) * 0x1d40,
           *(char *)(iVar5 + 0xcc2) == '\0')) {
          iVar8 = *(int *)(iVar6 + 0x40);
          iVar5 = iVar8 * 0x1d40;
          iVar9 = *(int *)(iVar6 + 0x4c);
          iVar6 = iVar9 + iVar5;
          if (*(int *)(iVar6 + 0x1cc4) == 0) goto LAB_ram_480883ec;
          puVar1 = (undefined4 *)(iVar5 + 0xcc4 + iVar9);
          uVar7 = 0;
          goto LAB_ram_48088334;
        }
        puVar4 = *(undefined1 **)(iVar5 + 0x43c);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_ram_481df390;
        }
        FUN_ram_4802a888(appppppcStack_40,puVar4,*(undefined4 *)(iVar5 + 0x438));
        goto LAB_ram_4808835e;
      }
      puVar1 = puVar1 + 2;
    } while (uVar7 < *(uint *)(iVar5 + 0x1cc4));
  }
  if (param_5 == 0) {
    return 0;
  }
  *param_3 = param_6;
  return param_5;
  while( true ) {
    uVar7 = uVar7 + 1;
    puVar1 = puVar1 + 2;
    if (*(uint *)(iVar6 + 0x1cc4) <= uVar7) break;
LAB_ram_48088334:
    iVar5 = FUN_ram_4802b18e(param_1,*puVar1);
    if (iVar5 != 0) {
      FUN_ram_4802a8a8(appppppcStack_40,*(undefined4 *)(iVar9 + (iVar8 * 0x3a8 + uVar7) * 8 + 0xcc8)
                      );
      goto LAB_ram_4808835e;
    }
  }
LAB_ram_480883ec:
  FUN_ram_4802a8a8(appppppcStack_40,&DAT_ram_481df390);
LAB_ram_4808835e:
  if ((char)bStack_31 < '\0') {
    appppppcStack_40[0] = (char ******)appppppcStack_40;
    if ((bStack_31 & 0x7f) != 0) goto LAB_ram_4808836e;
  }
  else if (((char *******)appppppcStack_40[0] != (char *******)0x0) && (iStack_38 != 0)) {
LAB_ram_4808836e:
    pcStack_44 = (char *)0x0;
    uVar3 = strtoul((char *)appppppcStack_40[0],&pcStack_44,param_4);
    if ((pcStack_44 != (char *)0x0) && ((*pcStack_44 == '\0' && (uVar3 <= param_2)))) {
      *param_3 = uVar3;
      goto LAB_ram_4808839e;
    }
  }
  iVar2 = 0;
LAB_ram_4808839e:
  FUN_ram_4802a59e(appppppcStack_40);
  return iVar2;
}


