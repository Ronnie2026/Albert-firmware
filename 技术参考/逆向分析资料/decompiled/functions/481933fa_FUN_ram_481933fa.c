/* Firmware entry: 0x481933fa */

void FUN_ram_481933fa(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined4 auStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if ((*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) &&
       (puVar13 = (undefined1 *)**(undefined4 **)(param_1 + 0x38), puVar13 != (undefined1 *)0x0)) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      uVar5 = param_2[4];
      uVar6 = param_2[5];
      uVar7 = param_2[6];
      uVar8 = param_2[7];
      uVar9 = param_2[8];
      uVar10 = param_2[10];
      uVar11 = param_2[0xb];
      puVar13[9] = param_2[9];
      *puVar13 = uVar1;
      puVar13[1] = uVar2;
      puVar13[2] = uVar3;
      puVar13[3] = uVar4;
      puVar13[4] = uVar5;
      puVar13[5] = uVar6;
      puVar13[6] = uVar7;
      puVar13[7] = uVar8;
      puVar13[8] = uVar9;
      puVar13[10] = uVar10;
      puVar13[0xb] = uVar11;
      iVar12 = FUN_ram_481921d8(param_2,1,auStack_14);
      if (iVar12 == 0) {
        *(undefined4 *)(**(int **)(param_1 + 0x38) + 0xc) = auStack_14[0];
      }
    }
    return;
  }
  return;
}


