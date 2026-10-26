/* Firmware entry: 0x48030bc0 */

void FUN_ram_48030bc0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff5c5f4 != '\0') {
    if ((char)DAT_ram_4ff5c633 < '\0') {
      uVar4 = DAT_ram_4ff5c633 & 0x7f;
    }
    else {
      uVar4 = DAT_ram_4ff5c62c;
      if (DAT_ram_4ff5c624 == (undefined4 *)0x0) {
        return;
      }
    }
    if (uVar4 != 0) {
      if ((DAT_ram_4ff5c5f7 != '\0') || (iVar1 = FUN_ram_4802e7d0(1), iVar1 == 0)) {
        thunk_FUN_ram_48125bc4(&DAT_ram_4ff6c118,0);
        FUN_ram_481245ea(&DAT_ram_4ff6c118,0);
        puVar2 = DAT_ram_4ff5c624;
        if ((char)DAT_ram_4ff5c633 < '\0') {
          puVar2 = &DAT_ram_4ff5c624;
        }
        puVar3 = DAT_ram_4ff5c634;
        if (DAT_ram_4ff5c643 < '\0') {
          puVar3 = &DAT_ram_4ff5c634;
        }
        FUN_ram_481249bc(&DAT_ram_4ff6c118,puVar2,puVar3,0,0,1);
        DAT_ram_4ff5c5fc = FUN_ram_48025ba6();
        DAT_ram_4ff5c608 = DAT_ram_4ff5c608 + 1;
        DAT_ram_4ff5c604 = 0;
        DAT_ram_4ff5c610 = 0;
        DAT_ram_4ff5c5f9 = 1;
        FUN_ram_4802ad46(&DAT_ram_4ff5c664,&DAT_ram_481df390);
        return;
      }
      FUN_ram_4802ad46(&DAT_ram_4ff5c664,"ap_restore_failed");
      iVar1 = FUN_ram_48025ba6();
      DAT_ram_4ff5c618 = iVar1 + 5000;
      DAT_ram_4ff5c61c = 1;
    }
  }
  return;
}


