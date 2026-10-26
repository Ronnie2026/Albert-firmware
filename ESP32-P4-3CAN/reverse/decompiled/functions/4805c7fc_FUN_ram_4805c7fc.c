/* Firmware entry: 0x4805c7fc */

void FUN_ram_4805c7fc(int param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar6 = (byte *)(param_2 + 0xc);
  bVar2 = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    do {
      while( true ) {
        uVar3 = (uint)*pbVar6;
        iVar1 = *(int *)(pbVar6 + 8);
        iVar5 = *(int *)(pbVar6 + 0xc);
        if (((((uVar3 < 8) && (iVar1 != 0 || iVar5 != 0)) &&
             (iVar4 = uVar3 * 0x120 + param_1, *(char *)(iVar4 + 0x70d6) != '\0')) &&
            ((*(int *)(iVar4 + 0x70c8) == iVar1 && (*(int *)(iVar4 + 0x70cc) == iVar5)))) &&
           (*(short *)(iVar4 + 0x70d4) != 0)) {
          *(short *)(iVar4 + 0x70d4) = *(short *)(iVar4 + 0x70d4) + -1;
        }
        iVar4 = uVar3 * 0x28 + param_1;
        if (((*(byte *)(iVar4 + 0x9d8) != uVar3) || (*(int *)(iVar4 + 0x9e0) != iVar1)) ||
           ((*(int *)(iVar4 + 0x9e4) != iVar5 || (*(short *)(iVar4 + 0x9f8) == 0)))) break;
        *(short *)(iVar4 + 0x9f8) = *(short *)(iVar4 + 0x9f8) + -1;
        bVar2 = bVar2 + 1;
        pbVar6 = pbVar6 + 0x10;
        if (*(byte *)(param_2 + 10) <= bVar2) goto LAB_ram_4805c8ac;
      }
      bVar2 = bVar2 + 1;
      pbVar6 = pbVar6 + 0x10;
    } while (bVar2 < *(byte *)(param_2 + 10));
  }
LAB_ram_4805c8ac:
  param_2[1] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  param_2[0x19] = 0;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 6) = 0xff00;
  return;
}


