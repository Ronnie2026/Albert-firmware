/* Firmware entry: 0x4802f750 */

char FUN_ram_4802f750(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x2c) == '\x04') {
    iVar7 = 0x88c;
    iVar6 = 0x18;
    iVar8 = 0;
  }
  else if (*(char *)(param_1 + 0x35a4) == '\x04') {
    iVar6 = 0x3590;
    iVar7 = 0x3e04;
    iVar8 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x6b1c) != '\x04') {
      return '\0';
    }
    iVar6 = 0x6b08;
    iVar7 = 0x737c;
    iVar8 = 2;
  }
  FUN_ram_4ff3ec14(iVar7 + param_1,0xffffffff);
  cVar1 = *(char *)(param_1 + iVar6 + 0x505);
  if (cVar1 != '\0') {
    iVar6 = iVar8 * 0x3578 + param_1;
    puVar5 = (undefined4 *)(iVar6 + 0x4d8);
    do {
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      *param_2 = *puVar5;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      puVar5 = puVar5 + 4;
      param_2 = param_2 + 4;
    } while (puVar5 != (undefined4 *)(iVar6 + 0x508));
    *param_2 = *puVar5;
    *(undefined1 *)(param_1 + iVar8 * 0x3578 + 0x51d) = 0;
  }
  FUN_ram_4ff3ee10(iVar7 + param_1);
  return cVar1;
}


