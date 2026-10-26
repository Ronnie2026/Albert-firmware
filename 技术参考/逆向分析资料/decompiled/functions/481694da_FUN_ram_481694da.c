/* Firmware entry: 0x481694da */

void FUN_ram_481694da(undefined4 *param_1)

{
  byte bVar1;
  byte *__s;
  size_t sVar2;
  byte *pbVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  pbVar3 = (byte *)*param_1;
  if (pbVar3 != (byte *)0x0) {
    uVar4 = (uint)*pbVar3;
    bVar1 = (&DAT_ram_4823af31)[uVar4];
    __s = pbVar3;
    while ((bVar1 & 8) != 0) {
      uVar4 = (uint)__s[1];
      __s = __s + 1;
      bVar1 = (&DAT_ram_4823af31)[uVar4];
    }
    if (uVar4 != 0) {
      sVar2 = strlen((char *)__s);
      pbVar3 = __s + (sVar2 - 1);
      if (__s < pbVar3) {
        do {
          if (((&DAT_ram_4823af31)[*pbVar3] & 8) == 0) break;
          pbVar3 = pbVar3 + -1;
        } while (pbVar3 != __s);
      }
      pbVar3[1] = 0;
      sVar2 = strlen((char *)__s);
      FUN_ram_4ff4522c(*param_1,__s,sVar2 + 1);
      return;
    }
    *pbVar3 = 0;
  }
  return;
}


