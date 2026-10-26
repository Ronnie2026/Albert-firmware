/* Firmware entry: 0x48184c4e */

int FUN_ram_48184c4e(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined4 *puVar5;
  byte bVar6;
  char acStack_74 [4];
  undefined1 auStack_70 [76];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_48176d4c(*param_1);
  bVar6 = 1;
  if (param_2 != 0) {
    bVar6 = (param_3 != 0) + 1;
  }
  acStack_74[0] = '\0';
  puVar5 = param_1 + 3;
  while (iVar2 = FUN_ram_48176f38(param_1), iVar2 == 0) {
    iVar2 = FUN_ram_48176e96(param_1,puVar5,uVar1);
    if (((iVar2 != 0) || (iVar2 = FUN_ram_48176e96(param_1,acStack_74,1), iVar2 != 0)) ||
       ((bVar6 == 2 && (iVar2 = FUN_ram_48176e96(param_1,param_2,param_3), iVar2 != 0)))) break;
    iVar2 = FUN_ram_48176eac(param_1,auStack_70);
    if ((((iVar2 != 0) || (iVar2 = FUN_ram_48176d6c(param_1,auStack_70,uVar1), iVar2 != 0)) ||
        (iVar2 = FUN_ram_48176e96(param_1,puVar5,uVar1), iVar2 != 0)) ||
       ((iVar2 = FUN_ram_48176eac(param_1,puVar5), iVar2 != 0 ||
        (cVar3 = acStack_74[0] + '\x01', bVar4 = acStack_74[0] + 1, acStack_74[0] = cVar3,
        bVar6 <= bVar4)))) break;
  }
  FUN_ram_48178af2(auStack_70,0x40);
  return iVar2;
}


