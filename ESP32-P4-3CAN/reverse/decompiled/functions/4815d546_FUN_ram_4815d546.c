/* Firmware entry: 0x4815d546 */

int FUN_ram_4815d546(int param_1,undefined4 param_2,undefined4 param_3,int param_4,
                    undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_21 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_5 == (undefined4 *)0x0) {
    return 0x102;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_ram_4815d31e();
    if (iVar1 == 0) {
      iVar2 = 0x110f;
    }
    else {
      if ((param_4 == 1) && (iVar2 = (**(code **)(**(int **)(iVar1 + 8) + 0x28))(), iVar2 != 0)) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0x10d;
      }
      iVar2 = FUN_ram_4815cbfc(iVar1,param_3,param_4 == 1,auStack_21);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)FUN_ram_4ff20824(0x14,2,0x1400,0x1800);
        if (puVar3 == (undefined4 *)0x0) {
          iVar2 = 0x101;
        }
        else {
          *(undefined1 *)((int)puVar3 + 0x12) = 1;
          *(bool *)((int)puVar3 + 0x11) = param_4 == 0;
          *(undefined1 *)(puVar3 + 4) = auStack_21[0];
          iVar4 = *(int *)(param_1 + 8);
          puVar3[3] = iVar1;
          *puVar3 = &PTR_FUN_ram_4815cf8a_ram_4823780c;
          if (iVar4 != 0) {
            *(undefined4 **)(iVar4 + 8) = puVar3;
          }
          iVar1 = *(int *)(param_1 + 4);
          puVar3[1] = iVar4;
          puVar3[2] = 0;
          *(undefined4 **)(param_1 + 8) = puVar3;
          if (iVar1 == 0) {
            *(undefined4 **)(param_1 + 4) = puVar3;
          }
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          *param_5 = puVar3;
        }
      }
    }
    return iVar2;
  }
  return 0x1101;
}


