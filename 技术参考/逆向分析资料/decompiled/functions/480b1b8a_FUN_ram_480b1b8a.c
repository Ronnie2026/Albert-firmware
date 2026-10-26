/* Firmware entry: 0x480b1b8a */

bool FUN_ram_480b1b8a(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  char cStack_11;
  
  iVar3 = DAT_ram_4ff6dc9c;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dc9c == 0) {
    return false;
  }
  if (*(char *)(DAT_ram_4ff6dc9c + 0x87b65) != '\0') {
    return false;
  }
  if (*(char *)(DAT_ram_4ff6dc9c + 0x758) == '\0') {
    return false;
  }
  if (*(char *)(DAT_ram_4ff6dc9c + 0x668) == '\0') {
    return false;
  }
  if (*(int *)(DAT_ram_4ff6dc9c + 0x7b8) != *(int *)(DAT_ram_4ff6dc9c + 0x6c8)) {
    return false;
  }
  if (*(int *)(DAT_ram_4ff6dc9c + 0x7bc) != *(int *)(DAT_ram_4ff6dc9c + 0x6cc)) {
    return false;
  }
  if (*(int *)(DAT_ram_4ff6dc9c + 0x7c8) != *(int *)(DAT_ram_4ff6dc9c + 0x6d8)) {
    return false;
  }
  iVar2 = FUN_ram_4ff453ae(DAT_ram_4ff6dc9c + 0x759,DAT_ram_4ff6dc9c + 0x669);
  if (iVar2 != 0) {
    return false;
  }
  iVar3 = FUN_ram_4ff453ae(iVar3 + 0x772,iVar3 + 0x682);
  if (iVar3 != 0) {
    return false;
  }
  iVar2 = FUN_ram_480b063e();
  iVar3 = DAT_ram_4ff6dcdc;
  if (iVar2 == 0) {
    return false;
  }
  if (*(char *)(DAT_ram_4ff6dcdc + 0x41112) != '\0') {
    cStack_11 = '\0';
    iVar2 = FUN_ram_480b1222(DAT_ram_4ff6dcdc + 0x30,DAT_ram_4ff6dcdc + 0x22540,FUN_ram_480b356e,
                             &cStack_11);
    if (iVar2 == 0) {
      *(undefined1 *)(iVar3 + 0x41111) = 0;
      *(char **)(iVar3 + 0x41114) = "outbox_full_or_invalid";
      return false;
    }
    if ((cStack_11 != '\0') && (iVar3 = FUN_ram_480b0ed4(), iVar3 == 0)) {
      return false;
    }
  }
  if (*(ushort *)(DAT_ram_4ff6dcdc + 0x22530) == 0) {
    iVar3 = 0;
  }
  else {
    pbVar4 = (byte *)(DAT_ram_4ff6dcdc + 0xb4);
    pbVar7 = pbVar4 + (uint)*(ushort *)(DAT_ram_4ff6dcdc + 0x22530) * 0x88;
    iVar3 = 0;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 0x88;
      iVar3 = iVar3 + (uint)bVar1;
    } while (pbVar4 != pbVar7);
  }
  iVar5 = FUN_ram_480b063e();
  iVar2 = DAT_ram_4ff6dcdc;
  if (iVar5 != 0) {
    if (*(char *)(DAT_ram_4ff6dcdc + 0x41112) == '\0') {
LAB_ram_480b1cc4:
      uVar6 = (uint)*(ushort *)(DAT_ram_4ff6dcdc + 0x22530);
      if (uVar6 == 0) {
        uVar8 = 0;
      }
      else {
        pbVar4 = (byte *)(DAT_ram_4ff6dcdc + 0xb4);
        pbVar7 = pbVar4 + uVar6 * 0x88;
        uVar8 = 0;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 0x88;
          uVar8 = uVar8 + bVar1;
        } while (pbVar7 != pbVar4);
      }
      return iVar3 == 0 && uVar8 == uVar6;
    }
    cStack_11 = '\0';
    iVar5 = FUN_ram_480b1222(DAT_ram_4ff6dcdc + 0x30,DAT_ram_4ff6dcdc + 0x22540,FUN_ram_480b356e,
                             &cStack_11);
    if (iVar5 == 0) {
      *(undefined1 *)(iVar2 + 0x41111) = 0;
      *(char **)(iVar2 + 0x41114) = "outbox_full_or_invalid";
    }
    else if ((cStack_11 == '\0') || (iVar2 = FUN_ram_480b0ed4(), iVar2 != 0)) goto LAB_ram_480b1cc4;
  }
  return false;
}


