/* Firmware entry: 0x480b0ed4 */

int FUN_ram_480b0ed4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_28;
  char acStack_24 [4];
  char acStack_20 [4];
  char acStack_1c [4];
  char acStack_18 [4];
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_480b063e();
  iVar1 = DAT_ram_4ff6dcdc;
  if (iVar2 != 0) {
    iVar2 = DAT_ram_4ff6dcdc + 0x22c68;
    uStack_28 = 0;
    iVar3 = FUN_ram_4807aaf8(DAT_ram_4ff6dcdc + 0x30,iVar2,0x1e479,&uStack_28);
    if (iVar3 == 0) {
      *(undefined1 *)(iVar1 + 0x41111) = 0;
      *(char **)(iVar1 + 0x41114) = "outbox_encode_failed";
    }
    else {
      acStack_24[0] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0];
      acStack_24[1] = s_P4RECORDSOUTBOX1_ram_481cc8c0[1];
      acStack_24[2] = s_P4RECORDSOUTBOX1_ram_481cc8c0[2];
      acStack_24[3] = s_P4RECORDSOUTBOX1_ram_481cc8c0[3];
      acStack_20[0] = s_P4RECORDSOUTBOX1_ram_481cc8c0[4];
      acStack_20[1] = s_P4RECORDSOUTBOX1_ram_481cc8c0[5];
      acStack_20[2] = s_P4RECORDSOUTBOX1_ram_481cc8c0[6];
      acStack_20[3] = s_P4RECORDSOUTBOX1_ram_481cc8c0[7];
      acStack_1c[0] = s_P4RECORDSOUTBOX1_ram_481cc8c0[8];
      acStack_1c[1] = s_P4RECORDSOUTBOX1_ram_481cc8c0[9];
      acStack_1c[2] = s_P4RECORDSOUTBOX1_ram_481cc8c0[10];
      acStack_1c[3] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xb];
      acStack_18[0] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xc];
      acStack_18[1] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xd];
      acStack_18[2] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xe];
      acStack_18[3] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xf];
      iStack_14 = *(int *)(iVar1 + 0x20) + 1;
      if (iStack_14 == 0) {
        iStack_14 = 1;
      }
      iVar2 = FUN_ram_480b0938(iVar1 + 8,acStack_24,iVar2,uStack_28);
      if (iVar2 != 0) {
        *(undefined1 **)(iVar1 + 0x41114) = &DAT_ram_481df390;
        return iVar2;
      }
      *(undefined1 *)(iVar1 + 0x41111) = 0;
      *(char **)(iVar1 + 0x41114) = "outbox_write_failed";
    }
  }
  return 0;
}


