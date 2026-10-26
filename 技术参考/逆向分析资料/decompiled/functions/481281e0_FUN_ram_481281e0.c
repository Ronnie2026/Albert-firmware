/* Firmware entry: 0x481281e0 */

void FUN_ram_481281e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  int *piStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
LAB_ram_481281f2:
  do {
    do {
      piStack_58 = (int *)0x0;
      iVar2 = FUN_ram_4ff3b4aa(*(undefined4 *)(param_1 + 8),&piStack_58,0xffffffff);
    } while (iVar2 != 1);
  } while (piStack_58 == (int *)0x0);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x14);
  piVar7 = piStack_58;
  if (iVar2 != iVar1) goto LAB_ram_48128230;
  goto LAB_ram_481282a0;
LAB_ram_48128230:
  do {
    while (pcVar5 = *(code **)(iVar2 + 4), pcVar5 != (code *)0x0) {
      iVar6 = *(int *)(iVar2 + 0x1c);
      piVar3 = (int *)*piVar7;
      if ((int *)iVar6 != piVar3) {
joined_r0x48128224:
        if (iVar6 != 0xcf) goto LAB_ram_48128228;
      }
LAB_ram_481282be:
      (*pcVar5)(piVar3);
      piVar7 = piStack_58;
LAB_ram_48128228:
      iVar2 = iVar2 + 0x20;
      if (iVar1 == iVar2) goto LAB_ram_4812829e;
    }
    if (*(int *)(iVar2 + 0x10) == 0) {
      pcVar5 = *(code **)(iVar2 + 0x18);
      if (pcVar5 != (code *)0x0) {
        iVar6 = *(int *)(iVar2 + 0x1c);
        piVar3 = piVar7;
        if (iVar6 != *piVar7) goto joined_r0x48128224;
        goto LAB_ram_481282be;
      }
      goto LAB_ram_48128228;
    }
    iVar6 = *piVar7;
    if ((*(int *)(iVar2 + 0x1c) != iVar6) && (*(int *)(iVar2 + 0x1c) != 0xcf))
    goto LAB_ram_48128228;
    iStack_50 = piVar7[1];
    iStack_4c = piVar7[2];
    iStack_48 = piVar7[3];
    iStack_44 = piVar7[4];
    iStack_40 = piVar7[5];
    iStack_3c = piVar7[6];
    iStack_38 = piVar7[7];
    iStack_34 = piVar7[8];
    iStack_30 = piVar7[9];
    iStack_2c = piVar7[10];
    iStack_28 = piVar7[0xb];
    iStack_24 = piVar7[0xc];
    iStack_54 = iVar6;
    if (*(int *)(iVar2 + 0x10) == 0) {
      iVar2 = FUN_ram_481951a6();
      if (*(int *)(iVar2 + 8) != 0) {
        puVar4 = (undefined4 *)FUN_ram_481281e0();
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        return;
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
      FUN_ram_4ff3c10a(0);
      return;
    }
    (**(code **)(iVar2 + 0x14))
              (iVar2 + 8,&iStack_54,&iStack_50,iStack_28,iVar6,*(code **)(iVar2 + 0x14));
    iVar2 = iVar2 + 0x20;
    piVar7 = piStack_58;
  } while (iVar1 != iVar2);
LAB_ram_4812829e:
  if (piVar7 != (int *)0x0) {
LAB_ram_481282a0:
    thunk_FUN_ram_4ff209c6(piVar7,0x34);
  }
  goto LAB_ram_481281f2;
}


