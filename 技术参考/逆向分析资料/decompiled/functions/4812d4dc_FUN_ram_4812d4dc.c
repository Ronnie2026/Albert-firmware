/* Firmware entry: 0x4812d4dc */

int FUN_ram_4812d4dc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = DAT_ram_4ff6e09c;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0x105;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[0xb];
  }
  iVar2 = 0x102;
  if (piVar1[5] != 0) {
    if ((char)piVar1[6] == '\0') {
      iVar2 = FUN_ram_4812d072(piVar1[1],piVar1[2]);
    }
    else {
      iVar4 = FUN_ram_4812e4d6(piVar1[1],piVar1[5],piVar1 + 7,0x10);
      iVar2 = 0x103;
      if (iVar4 != 0) goto LAB_ram_4812d51a;
      *(undefined1 *)(piVar1 + 6) = 0;
      piVar1[5] = piVar1[5] + 0x10;
      iVar2 = FUN_ram_4812d072(piVar1[1],piVar1[2]);
    }
    if (iVar2 != 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp_ota_ops","E (%lu) %s: New image failed verification\n",uVar3,
                       "esp_ota_ops");
      iVar4 = *(int *)(piVar1[2] + 4);
      goto joined_r0x4812d5ac;
    }
    if ((char)piVar1[3] != '\0') {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(3,"esp_ota_ops","I (%lu) %s: Copy from <%s> staging partition to <%s>...\n",
                       uVar3,"esp_ota_ops",piVar1[1] + 0x18,piVar1[2] + 0x18);
      iVar2 = FUN_ram_4812e2c6(piVar1[2],0,piVar1[1],0,*(undefined4 *)(piVar1[2] + 0x10));
    }
  }
LAB_ram_4812d51a:
  iVar4 = *(int *)(piVar1[2] + 4);
joined_r0x4812d5ac:
  if (iVar4 == 2) {
    FUN_ram_4812f7e4(0x2000);
  }
  iVar4 = piVar1[0xb];
  if (iVar4 != 0) {
    *(int *)(iVar4 + 0x30) = piVar1[0xc];
  }
  *(int *)piVar1[0xc] = iVar4;
  thunk_FUN_ram_4ff209c6(piVar1);
  return iVar2;
}


