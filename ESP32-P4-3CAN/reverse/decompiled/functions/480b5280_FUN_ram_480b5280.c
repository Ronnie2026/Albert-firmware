/* Firmware entry: 0x480b5280 */

void FUN_ram_480b5280(int *param_1)

{
  uint uVar1;
  size_t sVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((char)param_1[10] != '\0') {
    if ((((param_1[3] - 1U < 0xb) && (*(char *)((int)param_1 + param_1[3] + 0x1b) != '\0')) &&
        (iVar5 = FUN_ram_4808c696(param_1,&DAT_ram_481ca468), iVar5 != 0)) &&
       ((char)param_1[10] != '\0')) {
      uVar1 = param_1[2];
      if ((uVar1 <= (uint)param_1[1]) && (1 < param_1[1] - uVar1)) {
        *(undefined1 *)(*param_1 + uVar1) = 0x7b;
        iVar5 = param_1[2];
        param_1[2] = iVar5 + 1;
        *(undefined1 *)(iVar5 + 1 + *param_1) = 0;
        iVar5 = param_1[3];
        *(undefined1 *)((int)param_1 + iVar5 + 0x10) = 1;
        *(undefined1 *)((int)param_1 + iVar5 + 0x1c) = 1;
        param_1[3] = iVar5 + 1;
        goto LAB_ram_480b52aa;
      }
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
LAB_ram_480b52aa:
  FUN_ram_4808c2dc(param_1,"supported",1);
  FUN_ram_4808c96e(param_1,"hardware_revision",&DAT_ram_481c3ddc,4);
  FUN_ram_4808c96e(param_1,"hardware_profile",&DAT_ram_481c3ddc,4);
  uVar1 = FUN_ram_4802b91c(&DAT_ram_4ff5c850);
  if (0xfffe < uVar1 - 1) {
    uVar1 = 0;
  }
  FUN_ram_480b4e36(param_1,"chip_revision",uVar1 & 0xffff);
  sVar2 = strlen("4d97f369e1a32f126b7121a66a70a53fca628dfa");
  FUN_ram_4808c96e(param_1,"source_commit","4d97f369e1a32f126b7121a66a70a53fca628dfa",sVar2);
  FUN_ram_4808c2dc(param_1,"boot_validated",DAT_ram_4ff6de6d);
  pcVar3 = (char *)FUN_ram_4802ffd0();
  sVar2 = strlen(pcVar3);
  FUN_ram_4808c96e(param_1,"state",pcVar3,sVar2);
  pcVar3 = (char *)(DAT_ram_4ff6dc74 + 0x238);
  sVar2 = strlen(pcVar3);
  FUN_ram_4808c96e(param_1,"action_id",pcVar3,sVar2);
  if (*(char *)(DAT_ram_4ff6dc74 + 0x220) == '\0') {
    pcVar3 = "";
    sVar2 = 0;
  }
  else {
    pcVar3 = (char *)(DAT_ram_4ff6dc74 + 0x38);
    sVar2 = strlen(pcVar3);
  }
  FUN_ram_4808c96e(param_1,"release_id",pcVar3,sVar2);
  if (*(char *)(DAT_ram_4ff6dc74 + 0x220) == '\0') {
    pcVar3 = "";
    sVar2 = 0;
  }
  else {
    pcVar3 = (char *)(DAT_ram_4ff6dc74 + 0x113);
    sVar2 = strlen(pcVar3);
  }
  FUN_ram_4808c96e(param_1,"bin_sha256",pcVar3,sVar2);
  uVar4 = 0;
  if (DAT_ram_4ff6dc78 != 0) {
    uVar4 = *(undefined4 *)(DAT_ram_4ff6dc78 + 0x3ff4);
    fence();
  }
  FUN_ram_480b2068(param_1,"bytes_downloaded",uVar4);
  uVar4 = 0;
  if (*(char *)(DAT_ram_4ff6dc74 + 0x220) != '\0') {
    uVar4 = *(undefined4 *)(DAT_ram_4ff6dc74 + 0x214);
  }
  FUN_ram_480b2068(param_1,"expected_bytes",uVar4);
  pcVar3 = *(char **)(DAT_ram_4ff6dc74 + 0x714);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
    sVar2 = 0;
  }
  else {
    sVar2 = strlen(pcVar3);
  }
  FUN_ram_4808c96e(param_1,"error",pcVar3,sVar2);
  if ((((char)param_1[10] != '\0') && (1 < (uint)param_1[3])) &&
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
    uVar1 = param_1[2];
    if ((uVar1 <= (uint)param_1[1]) && (1 < param_1[1] - uVar1)) {
      *(undefined1 *)(*param_1 + uVar1) = 0x7d;
      iVar5 = param_1[2];
      param_1[2] = iVar5 + 1;
      *(undefined1 *)(iVar5 + 1 + *param_1) = 0;
      param_1[3] = param_1[3] + -1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


