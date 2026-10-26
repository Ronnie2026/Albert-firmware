/* Firmware entry: 0x480cea72 */

void FUN_ram_480cea72(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char acStack_21 [13];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_480b063e();
  iVar4 = DAT_ram_4ff6dcdc;
  if (iVar1 != 0) {
    iVar1 = DAT_ram_4ff6dcdc + 0x22540;
    iVar2 = FUN_ram_480cea00(&DAT_ram_4ff5be28,iVar1);
    if ((iVar2 == 0) || (iVar3 = FUN_ram_480b063e(), iVar2 = DAT_ram_4ff6dcdc, iVar3 == 0)) {
      return;
    }
    FUN_ram_4ff45158(DAT_ram_4ff6dcdc + 0x22540,iVar4 + 0x22540,0x524);
    *(undefined1 *)(iVar2 + 0x41112) = 1;
    acStack_21[0] = '\0';
    iVar4 = FUN_ram_480b1222(iVar2 + 0x30,iVar1,FUN_ram_480b356e,acStack_21);
    if (iVar4 == 0) {
      *(undefined1 *)(iVar2 + 0x41111) = 0;
      *(char **)(iVar2 + 0x41114) = "outbox_full_or_invalid";
    }
    else if (acStack_21[0] != '\0') {
      FUN_ram_480b0ed4();
      return;
    }
  }
  return;
}


