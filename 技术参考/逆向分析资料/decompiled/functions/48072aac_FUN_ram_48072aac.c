/* Firmware entry: 0x48072aac */

undefined4 FUN_ram_48072aac(char *param_1,byte *param_2)

{
  undefined2 uVar1;
  void *pvVar2;
  size_t sVar3;
  int iVar4;
  byte *pbVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  char *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x284) == 0) {
    return 0;
  }
  if (((ushort)(*(short *)(param_1 + 0x288) - 0xfU) < 0x11e) &&
     (pvVar2 = memchr(param_1,0,0x181), pvVar2 != (void *)0x0)) {
    __s = param_1 + 0x181;
    pvVar2 = memchr(__s,0,0x101);
    if (pvVar2 != (void *)0x0) {
      if (*param_1 != '\0') {
        sVar3 = strlen(param_1);
        iVar4 = FUN_ram_4807271e(sVar3,param_1,0x180);
        if (iVar4 == 0) {
          return 0;
        }
      }
      sVar3 = strlen(__s);
      if (sVar3 < 0x101) {
        pcVar7 = __s;
        if (sVar3 != 0) {
          do {
            pcVar8 = pcVar7 + 1;
            if (0x5d < (byte)(*pcVar7 - 0x21U)) {
              return 0;
            }
            pcVar7 = pcVar8;
          } while (__s + sVar3 != pcVar8);
        }
        memset(param_2,0,0x291);
        *param_2 = 0x43;
        param_2[1] = 0x4c;
        param_2[2] = 0x44;
        param_2[3] = 0x31;
        uVar10 = *(undefined4 *)(param_1 + 0x284);
        param_2[6] = (byte)((uint)uVar10 >> 0x10);
        param_2[5] = (byte)((uint)uVar10 >> 8);
        param_2[7] = (byte)((uint)uVar10 >> 0x18);
        param_2[4] = (byte)uVar10;
        uVar1 = *(undefined2 *)(param_1 + 0x288);
        param_2[9] = (byte)((ushort)uVar1 >> 8);
        param_2[8] = (byte)uVar1;
        param_2[10] = param_1[0x28a];
        sVar3 = strlen(param_1);
        FUN_ram_4ff45158(param_2 + 0xb,param_1,sVar3);
        sVar3 = strlen(__s);
        FUN_ram_4ff45158(param_2 + 0x18c,__s,sVar3);
        uVar9 = 0xffffffff;
        pbVar5 = param_2;
        do {
          cVar6 = '\b';
          uVar9 = uVar9 ^ *pbVar5;
          do {
            cVar6 = cVar6 + -1;
            uVar9 = uVar9 >> 1 ^ -(uVar9 & 1) & 0xedb88320;
          } while (cVar6 != '\0');
          pbVar5 = pbVar5 + 1;
        } while (pbVar5 != param_2 + 0x28d);
        uVar9 = ~uVar9;
        param_2[0x28d] = (byte)uVar9;
        param_2[0x28e] = (byte)(uVar9 >> 8);
        param_2[0x28f] = (byte)(uVar9 >> 0x10);
        param_2[0x290] = (byte)(uVar9 >> 0x18);
        return 1;
      }
    }
  }
  return 0;
}


