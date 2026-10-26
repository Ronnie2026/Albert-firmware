/* Firmware entry: 0x4819c22e */

void FUN_ram_4819c22e(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff21846(PTR_DAT_ram_4ff59f08_ram_4ff47fc8);
LAB_ram_4819c25e:
  iVar1 = DAT_ram_4ff6e2fc;
  if (DAT_ram_4ff6e2fc == 0) {
LAB_ram_4819c264:
    FUN_ram_4ff21966(PTR_DAT_ram_4ff59f08_ram_4ff47fc8);
    return;
  }
  uVar2 = *(uint *)(DAT_ram_4ff6e2fc + 4);
  iVar6 = *(int *)(DAT_ram_4ff6e2fc + 0x88);
  iVar7 = iVar6 + uVar2 * 4;
  iVar3 = uVar2 * 4 + DAT_ram_4ff6e2fc;
  do {
    uVar2 = uVar2 - 1;
    if ((int)uVar2 < 0) goto LAB_ram_4819c264;
    if ((param_2 == 0) || ((iVar6 != 0 && (*(int *)(iVar7 + 0x7c) == param_2)))) {
      pcVar5 = *(code **)(iVar3 + 4);
      if (*(int *)(iVar1 + 4) - 1U == uVar2) {
        *(uint *)(iVar1 + 4) = uVar2;
      }
      else {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      if (pcVar5 != (code *)0x0) {
        iVar8 = *(int *)(iVar1 + 4);
        if ((iVar6 == 0) || (uVar4 = 1 << (uVar2 & 0x1f), (*(uint *)(iVar6 + 0x100) & uVar4) == 0))
        {
          (*pcVar5)();
        }
        else if ((uVar4 & *(uint *)(iVar6 + 0x104)) == 0) {
          (*pcVar5)(param_1);
        }
        else {
          (*pcVar5)(*(undefined4 *)(iVar7 + -4));
        }
        if ((*(int *)(iVar1 + 4) != iVar8) || (iVar1 != DAT_ram_4ff6e2fc)) goto LAB_ram_4819c25e;
      }
    }
    iVar7 = iVar7 + -4;
    iVar3 = iVar3 + -4;
  } while( true );
}


