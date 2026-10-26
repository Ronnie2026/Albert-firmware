/* Firmware entry: 0x48149cae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48149cae(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x17 < *(ushort *)(param_1 + 10)) {
    pcVar1 = *(char **)(param_1 + 4);
    if (*pcVar1 == -0x7e) {
      if ((((_DAT_ram_4ff6cde0 == 0x2ff) && (DAT_ram_4ff6cde4 == 0 && DAT_ram_4ff6cde8 == 0)) &&
          (DAT_ram_4ff6cdec == 0x1000000)) &&
         (((*(int *)(pcVar1 + 8) == 0 && (*(int *)(pcVar1 + 0xc) == 0)) &&
          ((*(int *)(pcVar1 + 0x10) == 0 && (*(int *)(pcVar1 + 0x14) == 0)))))) {
        for (piVar4 = *(int **)(param_2 + 0xd0); piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
          if (((piVar4[1] & 0x8fffU) != 0x1ff) &&
             (((piVar4[1] != 0x2ff || (piVar4[2] != 0)) ||
              ((piVar4[3] != 0 || (piVar4[4] != 0x1000000)))))) {
            uVar3 = FUN_ram_48137fc8(*(undefined2 *)(pcVar1 + 4));
            FUN_ram_48149924(piVar4,uVar3);
          }
        }
      }
      else {
        iVar2 = FUN_ram_48149c74(param_2,&DAT_ram_4ff6cde0);
        if (iVar2 != 0) {
          uVar3 = FUN_ram_48137fc8(*(undefined2 *)(pcVar1 + 4));
          FUN_ram_48149924(iVar2,uVar3);
        }
      }
    }
    else if (((*pcVar1 == -0x7d) &&
             (iVar2 = FUN_ram_48149c74(param_2,&DAT_ram_4ff6cde0), iVar2 != 0)) &&
            (*(char *)(iVar2 + 0x19) == '\x01')) {
      *(undefined4 *)(iVar2 + 0x18) = 0x200;
    }
  }
  FUN_ram_4813ac74(param_1);
  return;
}


