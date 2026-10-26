/* Firmware entry: 0x4802e7d0 */

undefined4 FUN_ram_4802e7d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_ac [28];
  undefined1 auStack_90 [28];
  undefined1 auStack_74 [28];
  undefined1 auStack_58 [28];
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  code *pcStack_34;
  code *pcStack_30;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff5c5f7 = 0;
  if (DAT_ram_4ff6dc7c == '\0') {
    pcStack_34 = FUN_ram_480308a0;
    uStack_38 = 0;
    puStack_3c = &LAB_ram_4802dd36;
    pcStack_30 = FUN_ram_4802c504;
    FUN_ram_48124692(&DAT_ram_4ff6c118,&puStack_3c,0xcf);
    if (pcStack_34 != (code *)0x0) {
      (*pcStack_34)(&puStack_3c,&puStack_3c,3);
    }
    DAT_ram_4ff6dc7c = '\x01';
  }
  thunk_FUN_ram_48125bc4(&DAT_ram_4ff6c118,0);
  iVar1 = FUN_ram_48123e66(param_1 + 2);
  if (iVar1 != 0) {
    FUN_ram_481218da(auStack_ac,&DAT_ram_4ff5cc08);
    FUN_ram_481218da(auStack_90,&DAT_ram_4ff5cc08);
    FUN_ram_481218da(auStack_74,&DAT_ram_4ff5cbec);
    FUN_ram_4812181e(auStack_58,0);
    FUN_ram_4812181e(&puStack_3c,0);
    iVar1 = FUN_ram_48123830(&DAT_ram_4ff6c14c,auStack_ac,auStack_90,auStack_74,auStack_58,
                             &puStack_3c);
    if (iVar1 != 0) {
      puVar2 = DAT_ram_4ff5c644;
      if (DAT_ram_4ff5c653 < '\0') {
        puVar2 = &DAT_ram_4ff5c644;
      }
      iVar1 = FUN_ram_481237be(&DAT_ram_4ff6c14c,"Albert-P4-FSD",puVar2,6,0,4,0,3,4);
      DAT_ram_4ff5c5f7 = (undefined1)iVar1;
      if (iVar1 != 0) {
        DAT_ram_4ff5c61c = 0;
        return 0;
      }
    }
    return 1;
  }
  return 2;
}


