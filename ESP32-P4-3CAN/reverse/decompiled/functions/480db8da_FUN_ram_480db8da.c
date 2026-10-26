/* Firmware entry: 0x480db8da */

void FUN_ram_480db8da(int param_1,undefined1 param_2)

{
  bool bVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0xb38) != 0) {
    FUN_ram_480dce8c(*(undefined4 *)(param_1 + 0x58),*(int *)(param_1 + 0xb38));
    *(undefined4 *)(param_1 + 0xb38) = 0;
    *(undefined4 *)(param_1 + 0xb3c) = 0;
    *(undefined4 *)(param_1 + 0xb44) = 0;
    *(undefined4 *)(param_1 + 0xb48) = 0;
    *(undefined4 *)(param_1 + 0xb4c) = 0;
    *(undefined4 *)(param_1 + 0xb50) = 0;
    *(undefined4 *)(param_1 + 0xb58) = 0;
    *(undefined4 *)(param_1 + 0xb5c) = 0;
    *(undefined2 *)(param_1 + 0xb60) = 0;
    *(undefined4 *)(param_1 + 0xb40) = 8;
    *(undefined4 *)(param_1 + 0xb54) = 0x10000;
  }
  *(undefined1 *)(param_1 + 0xb65) = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0x58) + 0x7cd0);
  *(undefined1 *)(param_1 + 0xb36) = 0;
  cVar2 = *(char *)(iVar4 + 0x8fde);
  *(undefined4 *)(param_1 + 0xb70) = 0;
  *(undefined4 *)(param_1 + 0xb74) = 0;
  *(undefined4 *)(param_1 + 0xb78) = 0;
  *(undefined1 *)(param_1 + 0xb95) = param_2;
  *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
  if ((cVar2 == '\0') && (*(char *)(iVar4 + 0x8f94) == '\0')) {
    puVar3 = *(uint **)(*(int *)(param_1 + 0x58) + 0x7cdc);
    fence();
    uVar5 = *puVar3;
    while( true ) {
      uVar6 = uVar5 & 0xfffcffff;
      if (((uVar5 >> 0x10 & 3) != 2) || ((uVar5 & 0xffff) == 0)) break;
      bVar1 = *puVar3 == uVar5;
      uVar5 = *puVar3;
      if (bVar1) {
        *puVar3 = uVar6 - 1;
        return;
      }
    }
  }
  return;
}


