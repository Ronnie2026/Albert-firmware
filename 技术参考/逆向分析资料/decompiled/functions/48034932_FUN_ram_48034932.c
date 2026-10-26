/* Firmware entry: 0x48034932 */

undefined4 FUN_ram_48034932(char *param_1,char *param_2,undefined4 param_3,undefined1 *param_4)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  char local_68 [76];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_4 = 0;
  if (*param_1 == '\0') {
    return 0;
  }
  sVar3 = strlen(param_1);
  if (0x100 < sVar3) {
    return 0;
  }
  pcVar6 = param_1;
  while (pcVar6 != param_1 + sVar3) {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (0x5d < (byte)(cVar1 - 0x21U)) {
      return 0;
    }
  }
  sVar3 = strlen(param_2);
  if (sVar3 != 0x10) {
    return 0;
  }
  pcVar6 = param_2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) {
      return 0;
    }
  } while (pcVar6 != param_2 + 0x10);
  pcVar6 = local_68 + 0x20;
  local_68[0x20] = '\0';
  local_68[0x21] = '\0';
  local_68[0x22] = '\0';
  local_68[0x23] = '\0';
  local_68[0x24] = '\0';
  local_68[0x25] = '\0';
  local_68[0x26] = '\0';
  local_68[0x27] = '\0';
  local_68[0x28] = '\0';
  local_68[0x29] = '\0';
  local_68[0x2a] = '\0';
  local_68[0x2b] = '\0';
  local_68[0x2c] = '\0';
  local_68[0x2d] = '\0';
  local_68[0x2e] = '\0';
  local_68[0x2f] = '\0';
  local_68[0x30] = '\0';
  local_68[0x31] = '\0';
  local_68[0x32] = '\0';
  local_68[0x33] = '\0';
  local_68[0x34] = '\0';
  local_68[0x35] = '\0';
  local_68[0x36] = '\0';
  local_68[0x37] = '\0';
  local_68[0x38] = '\0';
  local_68[0x39] = '\0';
  local_68[0x3a] = '\0';
  local_68[0x3b] = '\0';
  local_68[0x3c] = '\0';
  local_68[0x3d] = '\0';
  local_68[0x3e] = '\0';
  local_68[0x3f] = '\0';
  local_68[0x40] = '\0';
  local_68[0x41] = '\0';
  local_68[0x42] = '\0';
  local_68[0x43] = '\0';
  local_68[0x44] = '\0';
  local_68[0x45] = '\0';
  FUN_ram_4819ad74(pcVar6,0x26,"P4/backend/v2/device/%s",param_2);
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  local_68[4] = '\0';
  local_68[5] = '\0';
  local_68[6] = '\0';
  local_68[7] = '\0';
  local_68[8] = '\0';
  local_68[9] = '\0';
  local_68[10] = '\0';
  local_68[0xb] = '\0';
  local_68[0xc] = '\0';
  local_68[0xd] = '\0';
  local_68[0xe] = '\0';
  local_68[0xf] = '\0';
  local_68[0x10] = '\0';
  local_68[0x11] = '\0';
  local_68[0x12] = '\0';
  local_68[0x13] = '\0';
  local_68[0x14] = '\0';
  local_68[0x15] = '\0';
  local_68[0x16] = '\0';
  local_68[0x17] = '\0';
  local_68[0x18] = '\0';
  local_68[0x19] = '\0';
  local_68[0x1a] = '\0';
  local_68[0x1b] = '\0';
  local_68[0x1c] = '\0';
  local_68[0x1d] = '\0';
  local_68[0x1e] = '\0';
  local_68[0x1f] = '\0';
  sVar3 = strlen(param_1);
  sVar4 = strlen(pcVar6);
  iVar5 = FUN_ram_4817697e(9);
  if ((iVar5 != 0) &&
     (iVar5 = FUN_ram_48176f8c(iVar5,param_1,sVar3,pcVar6,sVar4,local_68), iVar5 == 0)) {
    FUN_ram_4819ad74(param_4,0x57,"p4v2.%s.",param_2);
    pcVar2 = local_68;
    param_4 = param_4 + 0x16;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      FUN_ram_4819ad74(param_4,3,&DAT_ram_481c3b70,cVar1);
      param_4 = param_4 + 2;
    } while (pcVar2 != pcVar6);
    return 1;
  }
  return 0;
}


